################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../jni/overture/src/JBezier.cpp \
../jni/overture/src/JInput.cpp \
../jni/overture/src/JOverture.cpp \
../jni/overture/src/JRenderer.cpp \
../jni/overture/src/JResources.cpp 

OBJS += \
./jni/overture/src/JBezier.o \
./jni/overture/src/JInput.o \
./jni/overture/src/JOverture.o \
./jni/overture/src/JRenderer.o \
./jni/overture/src/JResources.o 

CPP_DEPS += \
./jni/overture/src/JBezier.d \
./jni/overture/src/JInput.d \
./jni/overture/src/JOverture.d \
./jni/overture/src/JRenderer.d \
./jni/overture/src/JResources.d 


# Each subdirectory must supply rules for building sources it contributes
jni/overture/src/%.o: ../jni/overture/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/Library/Frameworks/SDL2.framework/Versions/A/Headers -I"/Users/jurriaanvandenberg/Documents/Programming/C++/RedoxReactions/Redox/jni/overture/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


