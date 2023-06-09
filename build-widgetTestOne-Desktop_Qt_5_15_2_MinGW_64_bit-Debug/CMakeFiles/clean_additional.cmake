# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\widgetTestOne_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\widgetTestOne_autogen.dir\\ParseCache.txt"
  "widgetTestOne_autogen"
  )
endif()
