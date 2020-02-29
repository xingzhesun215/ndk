# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.1)

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

set(distribution_DIR ${CMAKE_SOURCE_DIR}/../../../../libs)

add_library( avutil-54
             SHARED
             IMPORTED )
set_target_properties( avutil-54
                       PROPERTIES IMPORTED_LOCATION
                       ../../../../libs/armeabi/libavutil-54.so )

add_library( swresample-1
             SHARED
             IMPORTED )
set_target_properties( swresample-1
                       PROPERTIES IMPORTED_LOCATION
                       ../../../../libs/armeabi/libswresample-1.so )
add_library( avcodec-56
             SHARED
             IMPORTED )
set_target_properties( avcodec-56
                       PROPERTIES IMPORTED_LOCATION
                       ../../../../libs/armeabi/libavcodec-56.so )
add_library( avfilter-5
             SHARED
             IMPORTED)
set_target_properties( avfilter-5
                       PROPERTIES IMPORTED_LOCATION
                       ../../../../libs/armeabi/libavfilter-5.so )
add_library( swscale-3
             SHARED
             IMPORTED)
set_target_properties( swscale-3
                       PROPERTIES IMPORTED_LOCATION
                       ../../../../libs/armeabi/libswscale-3.so )
add_library( avdevice-56
             SHARED
             IMPORTED)
set_target_properties( avdevice-56
                       PROPERTIES IMPORTED_LOCATION
                       ../../../../libs/armeabi/libavdevice-56.so )
add_library( avformat-56
             SHARED
             IMPORTED)
set_target_properties( avformat-56
                       PROPERTIES IMPORTED_LOCATION
                       ../../../../libs/armeabi/libavformat-56.so )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

add_library( native-lib
             SHARED
             src/main/cpp/native-lib.cpp )

include_directories(libs/include)

#target_include_directories(native-lib PRIVATE libs/include)

target_link_libraries( native-lib swresample-2 avcodec-57 avfilter-6 swscale-4 avdevice-57 avformat-57
                       ${log-lib} )
