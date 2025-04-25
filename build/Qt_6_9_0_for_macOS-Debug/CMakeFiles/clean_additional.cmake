# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Pomodoro_Timer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Pomodoro_Timer_autogen.dir/ParseCache.txt"
  "Pomodoro_Timer_autogen"
  )
endif()
