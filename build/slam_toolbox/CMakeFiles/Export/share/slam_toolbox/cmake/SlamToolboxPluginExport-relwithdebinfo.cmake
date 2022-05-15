#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "slam_toolbox::SlamToolboxPlugin" for configuration "RelWithDebInfo"
set_property(TARGET slam_toolbox::SlamToolboxPlugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(slam_toolbox::SlamToolboxPlugin PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/SlamToolboxPlugin.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/SlamToolboxPlugin.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS slam_toolbox::SlamToolboxPlugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_slam_toolbox::SlamToolboxPlugin "${_IMPORT_PREFIX}/lib/SlamToolboxPlugin.lib" "${_IMPORT_PREFIX}/bin/SlamToolboxPlugin.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
