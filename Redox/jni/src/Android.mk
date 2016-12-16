LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := main

SDL_PATH := ../SDL2

LOCAL_C_INCLUDES := $(LOCAL_PATH)/$(SDL_PATH)/include $(LOCAL_PATH)/../SDL2_image $(LOCAL_PATH)/../overture/include 


FILE_LIST := $(wildcard $(LOCAL_PATH)/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/**/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/**/**/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/**/**/**/*.cpp)

FILE_LIST += $(wildcard $(LOCAL_PATH)/../overture/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/../overture/**/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/../overture/**/**/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/../overture/**/**/**/*.cpp)
JURMAX_SOURCE := $(FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_SRC_FILES := $(SDL_PATH)/src/main/android/SDL_android_main.c \
					$(JURMAX_SOURCE)


LOCAL_SHARED_LIBRARIES := SDL2 SDL2_image

LOCAL_LDLIBS := -lGLESv1_CM -lGLESv2 -llog

include $(BUILD_SHARED_LIBRARY)
