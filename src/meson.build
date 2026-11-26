intake_sources = [
  'main.c',
  'intake-application.c',
  'intake-window.c',
  'views/profile/intake-profile-view.c',
]

blueprint_input = files(
  'intake-window.blp',
  'views/profile/intake-profile-view.blp',
)

blueprints = custom_target('blueprints',
  input: blueprint_input,
  output: '.',
  command: [find_program('blueprint-compiler'), 'batch-compile', '@OUTPUT@', '@CURRENT_SOURCE_DIR@', '@INPUT@'],
)

intake_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1', version: '>= 1.4'),
]

intake_sources += gnome.compile_resources('intake-resources',
  'intake.gresource.xml',
  c_name: 'intake',
  dependencies: blueprints,
)

executable('intake', intake_sources,
  dependencies: intake_deps,
       install: true,
)
