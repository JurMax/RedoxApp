################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../jni/src/redox/redoxmain.cpp 

OBJS += \
./jni/src/redox/redoxmain.o 

CPP_DEPS += \
./jni/src/redox/redoxmain.d 


# Each subdirectory must supply rules for building sources it contributes
jni/src/redox/%.o: ../jni/src/redox/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/Library/Frameworks/SDL2.framework/Versions/A/Headers -I"/Users/jurriaanvandenberg/Documents/Programming/C++/RedoxReactions/Redox/jni/overture/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


