#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "slam_toolbox::slam_toolbox__rosidl_typesupport_cpp" for configuration "Debug"
set_property(TARGET slam_toolbox::slam_toolbox__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(slam_toolbox::slam_toolbox__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/slam_toolbox__rosidl_typesupport_cpp.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/slam_toolbox__rosidl_typesupport_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS slam_toolbox::slam_toolbox__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_slam_toolbox::slam_toolbox__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/slam_toolbox__rosidl_typesupport_cpp.lib" "${_IMPORT_PREFIX}/bin/slam_toolbox__rosidl_typesupport_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
