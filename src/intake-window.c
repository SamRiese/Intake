/* intake-window.c
 *
 * Copyright 2026 Riese
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "config.h"

#include "intake-window.h"
#include "views/profile/intake-profile-view.h"

struct _IntakeWindow
{
	AdwApplicationWindow  parent_instance;
};

G_DEFINE_FINAL_TYPE (IntakeWindow, intake_window, ADW_TYPE_APPLICATION_WINDOW)

static void
intake_window_class_init (IntakeWindowClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	g_type_ensure (INTAKE_TYPE_PROFILE_VIEW);
	gtk_widget_class_set_template_from_resource (widget_class, "/org/riese/intake/intake-window.ui");
}

static void
intake_window_init (IntakeWindow *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}
