#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define INTAKE_TYPE_PROFILE_VIEW (intake_profile_view_get_type ())

G_DECLARE_FINAL_TYPE (IntakeProfileView, intake_profile_view,
                      INTAKE, PROFILE_VIEW, AdwBin)

G_END_DECLS
