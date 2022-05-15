#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "slam_toolbox::slam_toolbox__rosidl_generator_c" for configuration "MinSizeRel"
set_property(TARGET slam_toolbox::slam_toolbox__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(slam_toolbox::slam_toolbox__rosidl_generator_c PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/slam_toolbox__rosidl_generator_c.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/slam_toolbox__rosidl_generator_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS slam_toolbox::slam_toolbox__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_slam_toolbox::slam_toolbox__rosidl_generator_c "${_IMPORT_PREFIX}/lib/slam_toolbox__rosidl_generator_c.lib" "${_IMPORT_PREFIX}/bin/slam_toolbox__rosidl_generator_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
