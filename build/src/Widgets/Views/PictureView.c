/* PictureView.c generated by valac 0.36.8, the Vala compiler
 * generated from PictureView.vala, do not modify */

/*-
 * Copyright (c) 2018-2018 Artem Anufrij <artem.anufrij@live.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * The Noise authors hereby grant permission for non-GPL compatible
 * GStreamer plugins to be used and distributed together with GStreamer
 * and Noise. This permission is above and beyond the permissions granted
 * by the GPL license by which Noise is covered. If you modify this code
 * you may extend this exception to your version of the code, but you are not
 * obligated to do so. If you do not wish to do so, delete this exception
 * statement from your version.
 *
 * Authored by: Artem Anufrij <artem.anufrij@live.de>
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW (show_my_pictures_widgets_views_picture_view_get_type ())
#define SHOW_MY_PICTURES_WIDGETS_VIEWS_PICTURE_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW, ShowMyPicturesWidgetsViewsPictureView))
#define SHOW_MY_PICTURES_WIDGETS_VIEWS_PICTURE_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW, ShowMyPicturesWidgetsViewsPictureViewClass))
#define SHOW_MY_PICTURES_WIDGETS_VIEWS_IS_PICTURE_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW))
#define SHOW_MY_PICTURES_WIDGETS_VIEWS_IS_PICTURE_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW))
#define SHOW_MY_PICTURES_WIDGETS_VIEWS_PICTURE_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW, ShowMyPicturesWidgetsViewsPictureViewClass))

typedef struct _ShowMyPicturesWidgetsViewsPictureView ShowMyPicturesWidgetsViewsPictureView;
typedef struct _ShowMyPicturesWidgetsViewsPictureViewClass ShowMyPicturesWidgetsViewsPictureViewClass;
typedef struct _ShowMyPicturesWidgetsViewsPictureViewPrivate ShowMyPicturesWidgetsViewsPictureViewPrivate;

#define SHOW_MY_PICTURES_OBJECTS_TYPE_PICTURE (show_my_pictures_objects_picture_get_type ())
#define SHOW_MY_PICTURES_OBJECTS_PICTURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHOW_MY_PICTURES_OBJECTS_TYPE_PICTURE, ShowMyPicturesObjectsPicture))
#define SHOW_MY_PICTURES_OBJECTS_PICTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHOW_MY_PICTURES_OBJECTS_TYPE_PICTURE, ShowMyPicturesObjectsPictureClass))
#define SHOW_MY_PICTURES_OBJECTS_IS_PICTURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHOW_MY_PICTURES_OBJECTS_TYPE_PICTURE))
#define SHOW_MY_PICTURES_OBJECTS_IS_PICTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHOW_MY_PICTURES_OBJECTS_TYPE_PICTURE))
#define SHOW_MY_PICTURES_OBJECTS_PICTURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHOW_MY_PICTURES_OBJECTS_TYPE_PICTURE, ShowMyPicturesObjectsPictureClass))

typedef struct _ShowMyPicturesObjectsPicture ShowMyPicturesObjectsPicture;
typedef struct _ShowMyPicturesObjectsPictureClass ShowMyPicturesObjectsPictureClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _ShowMyPicturesWidgetsViewsPictureView {
	GtkGrid parent_instance;
	ShowMyPicturesWidgetsViewsPictureViewPrivate * priv;
};

struct _ShowMyPicturesWidgetsViewsPictureViewClass {
	GtkGridClass parent_class;
};

struct _ShowMyPicturesWidgetsViewsPictureViewPrivate {
	ShowMyPicturesObjectsPicture* current_picture;
	GdkPixbuf* current_pixbuf;
	GtkImage* image;
	GtkScrolledWindow* scroll;
	gdouble zoom;
};


static gpointer show_my_pictures_widgets_views_picture_view_parent_class = NULL;

GType show_my_pictures_widgets_views_picture_view_get_type (void) G_GNUC_CONST;
GType show_my_pictures_objects_picture_get_type (void) G_GNUC_CONST;
#define SHOW_MY_PICTURES_WIDGETS_VIEWS_PICTURE_VIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW, ShowMyPicturesWidgetsViewsPictureViewPrivate))
enum  {
	SHOW_MY_PICTURES_WIDGETS_VIEWS_PICTURE_VIEW_0_PROPERTY
};
ShowMyPicturesWidgetsViewsPictureView* show_my_pictures_widgets_views_picture_view_new (void);
ShowMyPicturesWidgetsViewsPictureView* show_my_pictures_widgets_views_picture_view_construct (GType object_type);
static void show_my_pictures_widgets_views_picture_view_build_ui (ShowMyPicturesWidgetsViewsPictureView* self);
void show_my_pictures_widgets_views_picture_view_show_picture (ShowMyPicturesWidgetsViewsPictureView* self, ShowMyPicturesObjectsPicture* picture);
const gchar* show_my_pictures_objects_picture_get_path (ShowMyPicturesObjectsPicture* self);
void show_my_pictures_widgets_views_picture_view_zoom_in (ShowMyPicturesWidgetsViewsPictureView* self);
void show_my_pictures_widgets_views_picture_view_zoom_out (ShowMyPicturesWidgetsViewsPictureView* self);
static void show_my_pictures_widgets_views_picture_view_finalize (GObject * obj);


ShowMyPicturesWidgetsViewsPictureView* show_my_pictures_widgets_views_picture_view_construct (GType object_type) {
	ShowMyPicturesWidgetsViewsPictureView * self = NULL;
#line 39 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self = (ShowMyPicturesWidgetsViewsPictureView*) g_object_new (object_type, NULL);
#line 40 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	show_my_pictures_widgets_views_picture_view_build_ui (self);
#line 39 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	return self;
#line 109 "PictureView.c"
}


ShowMyPicturesWidgetsViewsPictureView* show_my_pictures_widgets_views_picture_view_new (void) {
#line 39 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	return show_my_pictures_widgets_views_picture_view_construct (SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW);
#line 116 "PictureView.c"
}


static void show_my_pictures_widgets_views_picture_view_build_ui (ShowMyPicturesWidgetsViewsPictureView* self) {
	GtkScrolledWindow* _tmp0_;
	GtkScrolledWindow* _tmp1_;
	GtkImage* _tmp2_;
	GtkImage* _tmp3_;
	GtkStyleContext* _tmp4_;
	GtkScrolledWindow* _tmp5_;
	GtkImage* _tmp6_;
	GtkScrolledWindow* _tmp7_;
#line 43 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_return_if_fail (self != NULL);
#line 44 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp0_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
#line 44 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_object_ref_sink (_tmp0_);
#line 44 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_g_object_unref0 (self->priv->scroll);
#line 44 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self->priv->scroll = _tmp0_;
#line 45 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp1_ = self->priv->scroll;
#line 45 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_object_set ((GtkWidget*) _tmp1_, "expand", TRUE, NULL);
#line 47 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp2_ = (GtkImage*) gtk_image_new ();
#line 47 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_object_ref_sink (_tmp2_);
#line 47 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_g_object_unref0 (self->priv->image);
#line 47 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self->priv->image = _tmp2_;
#line 48 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp3_ = self->priv->image;
#line 48 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp4_ = gtk_widget_get_style_context ((GtkWidget*) _tmp3_);
#line 48 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	gtk_style_context_add_class (_tmp4_, "card");
#line 49 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp5_ = self->priv->scroll;
#line 49 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp6_ = self->priv->image;
#line 49 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	gtk_container_add ((GtkContainer*) _tmp5_, (GtkWidget*) _tmp6_);
#line 51 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp7_ = self->priv->scroll;
#line 51 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp7_);
#line 167 "PictureView.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 58 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	return self ? g_object_ref (self) : NULL;
#line 174 "PictureView.c"
}


void show_my_pictures_widgets_views_picture_view_show_picture (ShowMyPicturesWidgetsViewsPictureView* self, ShowMyPicturesObjectsPicture* picture) {
	ShowMyPicturesObjectsPicture* _tmp0_;
	ShowMyPicturesObjectsPicture* _tmp1_;
	ShowMyPicturesObjectsPicture* _tmp2_;
	ShowMyPicturesObjectsPicture* _tmp3_;
	GtkImage* _tmp12_;
	GdkPixbuf* _tmp13_;
	GError * _inner_error_ = NULL;
#line 54 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_return_if_fail (self != NULL);
#line 54 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_return_if_fail (picture != NULL);
#line 55 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp0_ = self->priv->current_picture;
#line 55 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp1_ = picture;
#line 55 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	if (_tmp0_ == _tmp1_) {
#line 56 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		return;
#line 198 "PictureView.c"
	}
#line 58 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp2_ = picture;
#line 58 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 58 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_g_object_unref0 (self->priv->current_picture);
#line 58 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self->priv->current_picture = _tmp3_;
#line 208 "PictureView.c"
	{
		GdkPixbuf* _tmp4_ = NULL;
		ShowMyPicturesObjectsPicture* _tmp5_;
		const gchar* _tmp6_;
		const gchar* _tmp7_;
		GdkPixbuf* _tmp8_;
		GdkPixbuf* _tmp9_;
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp5_ = self->priv->current_picture;
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp6_ = show_my_pictures_objects_picture_get_path (_tmp5_);
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp7_ = _tmp6_;
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp8_ = gdk_pixbuf_new_from_file (_tmp7_, &_inner_error_);
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp4_ = _tmp8_;
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 228 "PictureView.c"
			goto __catch6_g_error;
		}
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp9_ = _tmp4_;
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp4_ = NULL;
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_g_object_unref0 (self->priv->current_pixbuf);
#line 60 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		self->priv->current_pixbuf = _tmp9_;
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_g_object_unref0 (_tmp4_);
#line 241 "PictureView.c"
	}
	goto __finally6;
	__catch6_g_error:
	{
		GError* err = NULL;
		GError* _tmp10_;
		const gchar* _tmp11_;
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		err = _inner_error_;
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_inner_error_ = NULL;
#line 62 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp10_ = err;
#line 62 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp11_ = _tmp10_->message;
#line 62 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		g_warning ("PictureView.vala:62: %s", _tmp11_);
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_g_error_free0 (err);
#line 261 "PictureView.c"
	}
	__finally6:
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		g_clear_error (&_inner_error_);
#line 59 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		return;
#line 272 "PictureView.c"
	}
#line 64 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp12_ = self->priv->image;
#line 64 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp13_ = self->priv->current_pixbuf;
#line 64 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_object_set (_tmp12_, "pixbuf", _tmp13_, NULL);
#line 280 "PictureView.c"
}


void show_my_pictures_widgets_views_picture_view_zoom_in (ShowMyPicturesWidgetsViewsPictureView* self) {
	gdouble _tmp0_;
#line 67 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_return_if_fail (self != NULL);
#line 68 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp0_ = self->priv->zoom;
#line 68 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	if (_tmp0_ < ((gdouble) 1)) {
#line 292 "PictureView.c"
		gdouble _tmp1_;
		GtkImage* _tmp2_;
		GdkPixbuf* _tmp3_;
		GdkPixbuf* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		gdouble _tmp7_;
		GdkPixbuf* _tmp8_;
		gint _tmp9_;
		gint _tmp10_;
		gdouble _tmp11_;
		GdkPixbuf* _tmp12_;
		GdkPixbuf* _tmp13_;
#line 69 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp1_ = self->priv->zoom;
#line 69 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		self->priv->zoom = _tmp1_ + 0.1;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp2_ = self->priv->image;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp3_ = self->priv->current_pixbuf;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp4_ = self->priv->current_pixbuf;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp5_ = gdk_pixbuf_get_width (_tmp4_);
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp6_ = _tmp5_;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp7_ = self->priv->zoom;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp8_ = self->priv->current_pixbuf;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp9_ = gdk_pixbuf_get_height (_tmp8_);
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp10_ = _tmp9_;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp11_ = self->priv->zoom;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp12_ = gdk_pixbuf_scale_simple (_tmp3_, (gint) (_tmp6_ * _tmp7_), (gint) (_tmp10_ * _tmp11_), GDK_INTERP_BILINEAR);
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp13_ = _tmp12_;
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		g_object_set (_tmp2_, "pixbuf", _tmp13_, NULL);
#line 70 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_g_object_unref0 (_tmp13_);
#line 338 "PictureView.c"
	}
}


void show_my_pictures_widgets_views_picture_view_zoom_out (ShowMyPicturesWidgetsViewsPictureView* self) {
	gdouble _tmp0_;
#line 74 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_return_if_fail (self != NULL);
#line 75 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_tmp0_ = self->priv->zoom;
#line 75 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	if (_tmp0_ >= 0.2) {
#line 351 "PictureView.c"
		gdouble _tmp1_;
		GtkImage* _tmp2_;
		GdkPixbuf* _tmp3_;
		GdkPixbuf* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		gdouble _tmp7_;
		GdkPixbuf* _tmp8_;
		gint _tmp9_;
		gint _tmp10_;
		gdouble _tmp11_;
		GdkPixbuf* _tmp12_;
		GdkPixbuf* _tmp13_;
#line 76 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp1_ = self->priv->zoom;
#line 76 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		self->priv->zoom = _tmp1_ - 0.1;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp2_ = self->priv->image;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp3_ = self->priv->current_pixbuf;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp4_ = self->priv->current_pixbuf;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp5_ = gdk_pixbuf_get_width (_tmp4_);
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp6_ = _tmp5_;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp7_ = self->priv->zoom;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp8_ = self->priv->current_pixbuf;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp9_ = gdk_pixbuf_get_height (_tmp8_);
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp10_ = _tmp9_;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp11_ = self->priv->zoom;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp12_ = gdk_pixbuf_scale_simple (_tmp3_, (gint) (_tmp6_ * _tmp7_), (gint) (_tmp10_ * _tmp11_), GDK_INTERP_BILINEAR);
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_tmp13_ = _tmp12_;
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		g_object_set (_tmp2_, "pixbuf", _tmp13_, NULL);
#line 77 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
		_g_object_unref0 (_tmp13_);
#line 397 "PictureView.c"
	}
}


static void show_my_pictures_widgets_views_picture_view_class_init (ShowMyPicturesWidgetsViewsPictureViewClass * klass) {
#line 29 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	show_my_pictures_widgets_views_picture_view_parent_class = g_type_class_peek_parent (klass);
#line 29 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	g_type_class_add_private (klass, sizeof (ShowMyPicturesWidgetsViewsPictureViewPrivate));
#line 29 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	G_OBJECT_CLASS (klass)->finalize = show_my_pictures_widgets_views_picture_view_finalize;
#line 409 "PictureView.c"
}


static void show_my_pictures_widgets_views_picture_view_instance_init (ShowMyPicturesWidgetsViewsPictureView * self) {
#line 29 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self->priv = SHOW_MY_PICTURES_WIDGETS_VIEWS_PICTURE_VIEW_GET_PRIVATE (self);
#line 32 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self->priv->current_pixbuf = NULL;
#line 37 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self->priv->zoom = (gdouble) 1;
#line 420 "PictureView.c"
}


static void show_my_pictures_widgets_views_picture_view_finalize (GObject * obj) {
	ShowMyPicturesWidgetsViewsPictureView * self;
#line 29 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SHOW_MY_PICTURES_WIDGETS_VIEWS_TYPE_PICTURE_VIEW, ShowMyPicturesWidgetsViewsPictureView);
#line 31 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_g_object_unref0 (self->priv->current_picture);
#line 32 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_g_object_unref0 (self->priv->current_pixbuf);
#line 34 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_g_object_unref0 (self->priv->image);
#line 35 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	_g_object_unref0 (self->priv->scroll);
#line 29 "/home/artem/Projekte/showmypictures/src/Widgets/Views/PictureView.vala"
	G_OBJECT_CLASS (show_my_pictures_widgets_views_picture_view_parent_class)->finalize (obj);
#line 438 "PictureView.c"
}


GType show_my_pictures_widgets_views_picture_view_get_type (void) {
	static volatile gsize show_my_pictures_widgets_views_picture_view_type_id__volatile = 0;
	if (g_once_init_enter (&show_my_pictures_widgets_views_picture_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShowMyPicturesWidgetsViewsPictureViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) show_my_pictures_widgets_views_picture_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShowMyPicturesWidgetsViewsPictureView), 0, (GInstanceInitFunc) show_my_pictures_widgets_views_picture_view_instance_init, NULL };
		GType show_my_pictures_widgets_views_picture_view_type_id;
		show_my_pictures_widgets_views_picture_view_type_id = g_type_register_static (gtk_grid_get_type (), "ShowMyPicturesWidgetsViewsPictureView", &g_define_type_info, 0);
		g_once_init_leave (&show_my_pictures_widgets_views_picture_view_type_id__volatile, show_my_pictures_widgets_views_picture_view_type_id);
	}
	return show_my_pictures_widgets_views_picture_view_type_id__volatile;
}



