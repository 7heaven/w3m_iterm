Source: http://homepage3.nifty.com/slokar/fb/
original readme.txt

���󶡤�����
  ��w3mimgdisplayfb w3mimgdisplay (�ۤ�)�ߴ��� framebuffer �Ѳ����ӥ塼��
  ��w3mimgsizefb    w3mimgsize �ߴ��β������������ץ����

��ɬ�פʤ��
  ��GdkPixbuf or Imlib2
  ��TRUE-COLOR �� framebuffer �����ѤǤ���Ķ�

������ѥ���
  ��Makefile �� CFLAGS, LDFLAGS �� Imlib2, GdkPixbuf �Τɤ��餫���Ѥ���
    ����ͭ���ˤ��Ƥ��� make ���Ƥ�������

������ˡ
  ��w3mimgdisplay, w3mimgsize ��Ʊ��

��������
  ��framebuffer �� 15,16,24,32bpp PACKED-PIXELS TRUE-COLOR
    �ˤ����б����Ƥ��ޤ���
  ������ w3mimgdisplayfb �� -bg ���ץ�������Ѥ��ʤ������طʿ��Ϲ�
    (#000000)�Ȳ��ꤷ�Ƥ��ޤ���

����ȯ�Ķ�
  �� w3m version w3m/0.3+cvs-1.353-m17n-20020316
  �� linux 2.4.18 (Vine Linux 2.5)
  �� gcc 2.95.3
  �� GdkPixbuf 0.16.0
  �� Imlib2 1.0.6
  �� $ dmesg |grep vesafb
     vesafb: framebuffer at 0xe2000000, mapped to 0xc880d000, size 8192k
     vesafb: mode is 1024x768x16, linelength=2048, pages=4
     vesafb: protected mode interface info at c000:4785
     vesafb: scrolling: redraw
     vesafb: directcolor: size=0:5:6:5, shift=0:11:5:0
  �� �ӥǥ�������
    VGA compatible controller: ATI Technologies Inc 3D Rage Pro AGP 1X/2X (rev 92).
      Master Capable.  Latency=64.  Min Gnt=8.
      Non-prefetchable 32 bit memory at 0xe2000000 [0xe2ffffff].
      I/O at 0xd800 [0xd8ff].
      Non-prefetchable 32 bit memory at 0xe1800000 [0xe1800fff].

������¾
  ��w3mimgsizefb, w3mimgdisplayfb �Ϻ��ܹ�§����� w3mimgsize,
    w3mimgdisplay ���Ȥˤ��Ƥ��ޤ�(�Ȥ������ۤȤ�ɤ��ΤޤޤǤ�)��
  ��framebuffer ����ط��Υ����ɤϡ���ޤ������󤸤���Υ���ץ�ץ�
    �����Ȥˤ��Ƥ��ޤ�(�Ȥ������ۤȤ�ɤ��ΤޤޤǤ�)��
  ���ޤ���ȯ�Ӿ�Ǥ��ꡢư���ǧ���Խ�ʬ�Ǥ������Ѥ����ݤϤ����Ȥ���Ǥ
    �Ǥ��ꤤ���ޤ���
  ����������ʪ�˴ޤޤ�륳���ɤ��ѹ��Ѥ� BSD �饤���󥹤˽�����ΤȤ���
    �����ܺ٤� license.txt �򻲾Ȥ��Ƥ���������

����Ϣ URI
   �� W3M Homepage  http://w3m.sourceforge.net/
   �� w3m-img http://www2u.biglobe.ne.jp/~hsaka/w3m/index-ja.html
   �� Linux Kernel Hack Japan http://www.sainet.or.jp/~yamasaki/
   �� Imlib2 http://www.enlightenment.org/pages/main.html
   �� GdkPixbuf http://developer.gnome.org/arch/imaging/gdkpixbuf.html

������
  ��2002/07/05 ��ȯ����
  ��2002/07/07 ImageMagick ��ư���ǧ
  ��2002/07/10 GdkPixbuf ��ư���ǧ
  ��2002/07/11 Imlib2 ��ư���ǧ
  ��2002/07/15 Version 0.1
               ����
  ��2002/07/22 Version 0.2
               ����ι�®��

��Ϣ����
  ZXB01226@nifty.com
  http://homepage3.nifty.com/slokar/
