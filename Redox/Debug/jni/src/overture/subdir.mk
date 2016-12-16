################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../jni/src/overture/functions.cpp \
../jni/src/overture/inputhandler.cpp \
../jni/src/overture/renderer.cpp \
../jni/src/overture/resources.cpp 

OBJS += \
./jni/src/overture/functions.o \
./jni/src/overture/inputhandler.o \
./jni/src/overture/renderer.o \
./jni/src/overture/resources.o 

CPP_DEPS += \
./jni/src/overture/functions.d \
./jni/src/overture/inputhandler.d \
./jni/src/overture/renderer.d \
./jni/src/overture/resources.d 


# Each subdirectory must supply rules for building sources it contributes
jni/src/overture/%.o: ../jni/src/overture/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/Library/Frameworks/SDL2.framework/Versions/A/Headers -I"/Users/jurriaanvandenberg/Documents/Programming/C++/RedoxReactions/Redox/jni/src/overture" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


