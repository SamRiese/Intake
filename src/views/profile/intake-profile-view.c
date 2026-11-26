#include "config.h"

#include "intake-profile-view.h"

struct _IntakeProfileView
{
	AdwBin parent_instance;
};

G_DEFINE_FINAL_TYPE (IntakeProfileView, intake_profile_view, ADW_TYPE_BIN)

static void
intake_profile_view_class_init (IntakeProfileViewClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class,
		"/org/riese/intake/views/profile/intake-profile-view.ui");
}

static void
intake_profile_view_init (IntakeProfileView *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}
