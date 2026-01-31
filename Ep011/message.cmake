# message("The sky is blue")
# message([=[The
#  sky 
#   is 
#    blue]=])

# message("Sky is blue \" my \n friend")
# message("Multi 
#          .... lines ${CMAKE_VERSION}")

message(the\ sky\ is blue)
message(Two arguments)
message(The;sky;is;blue)

# Variables

set(var1 "Text") # set([[var1]] "Text") set("var1" "Text") 
message(${var1})
set(ENV{MY_PATH} "/home/alex")
message($ENV{MY_PATH})
message($ENV{PATH})
# cache vars
set(cache_var "CV" CACHE STRING "CS Value")
message(${cache_var})
message(${CMAKE_VERSION} ${CMAKE_COMMAND} ${CMAKE_CURRENT_LIST_FILE})
