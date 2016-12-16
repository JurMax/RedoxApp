
# Uncomment this if you're using STL in your project
# See CPLUSPLUS-SUPPORT.html in the NDK documentation for more information

# APP_STL := stlport_static
# NDK_TOOLCHAIN_VERSION := clang
# APP_ABI := armeabi armeabi-v7a


NDK_TOOLCHAIN_VERSION := 4.9
APP_STL := gnustl_shared

APP_CPPFLAGS += -std=c++11
LOCAL_CFLAGS := -std=gnu++11

APP_ABI := armeabi armeabi-v7a