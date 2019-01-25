

#include "w3mimg/w3mimg.h"


static int iterm_init(w3mimg_op *self){
	return 0;
}

static int iterm_finish(w3mimg_op *self){
	return 0;
}

static int iterm_clear(w3mimg_op *self, int x, int y, int w, int h){
	return 0;
}

static int iterm_active(w3mimg_op *self){
	return 0;
}

static void iterm_set_background(w3mimg_op *self, char *background){
	
}

static void iterm_sync(w3mimg_op *self){
}

static void iterm_close(w3mimg_op *self){
}



static int iterm_load_image(w3mimg_op *self, W3MImage *img, char *fname, int w, int h){
	return 0;
}

static int iterm_show_image(w3mimg_op *self, W3MImage *img, int sx, int sy, int sw, int sh, int x, int y){
	return 0;
}

static void iterm_free_image(w3mimg_op *self, W3MImage *img){
}

static int iterm_get_image_size(w3mimg_op *self, W3MImage *img, char *fname, int *w, int *h){
	return 0;
}

w3mimg_op *w3mimg_itermopen(){
	w3mimg_op *wop = NULL;

	wop = (w3mimg_op *) malloc(sizeof(w3mimg_op));
	if(wop == NULL) return NULL;
	memset(wop, 0, sizeof(w3mimg_op));

	wop->offset_x = 0;
	wop->offset_y = 0;

	/*wop->priv = iterm struct*/;
	
	wop->init = iterm_init;
	wop->finish = iterm_finish;
	wop->active = iterm_active;
	wop->set_background = iterm_set_background;
	wop->sync = iterm_sync;
	wop->close = iterm_close;
	wop->clear = iterm_clear;

	wop->load_image = iterm_load_image;
	wop->show_image = iterm_show_image;
	wop->free_image = iterm_free_image;
	wop->get_image_size = iterm_get_image_size;

	return wop;

error:
	free(wop);
	return NULL;
}
