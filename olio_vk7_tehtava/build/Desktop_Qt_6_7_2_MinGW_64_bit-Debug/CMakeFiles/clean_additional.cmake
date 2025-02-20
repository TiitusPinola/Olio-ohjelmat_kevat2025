# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\olio_vk7_tehtava_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\olio_vk7_tehtava_autogen.dir\\ParseCache.txt"
  "olio_vk7_tehtava_autogen"
  )
endif()
