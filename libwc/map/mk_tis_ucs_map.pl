
@NAME = ();
while(<DATA>) {
  chop;
  s/\s*$//;
  (($n, $m, $c) = split(" ", $_, 3)) >= 3 || next;
  push(@NAME, $n);
  $MAP{$n} = $m;
  $CODE{$n} = $c;
}

foreach $name (@NAME) {

$code = $CODE{$name};
$map = $MAP{$name};

print "$name\t$map\t$code\n";

@to_ucs = ();
%from_ucs = ();
open(OUT, "> ${name}_ucs.map");

for $i (0xA1 .. 0xDA, 0xDF .. 0xFB) {
  $u = $i - 0xA0 + 0xE00;
  $to_ucs[$i] = $u;
  $from_ucs{$u} = $i;
}

print OUT <<EOF;
/* $code */

static wc_uint16 ${name}_ucs_map[ 0x80 ] = {
EOF

foreach $i (0x10 .. 0x1F) {
  print OUT " ";
foreach $j (0 .. 7) {
  $_ = $i * 8 + $j;
  $u = $to_ucs[$_];
  if ($u) {
    printf OUT " 0x%.4X,", $u;
  } else {
    print OUT " 0,     ";
  }
}
  print OUT "\n";
}

@ucs = sort { $a <=> $b } keys %from_ucs;
$nucs = @ucs + 0;

print OUT <<EOF;
};

#define N_ucs_${name}_map $nucs

static wc_map ucs_${name}_map[ N_ucs_${name}_map ] = {
EOF
for(@ucs) {
  printf OUT "  { 0x%.4X, 0x%.2X },\n", $_, $from_ucs{$_};
}

print OUT <<EOF;
};
EOF

close(MAP);
}

__END__
iso885911	-		ISO-8859-11, TIS-620 (Thai)
