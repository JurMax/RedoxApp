################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../jni/src/redox/objects/particles/elektron.cpp \
../jni/src/redox/objects/particles/molecule.cpp 

OBJS += \
./jni/src/redox/objects/particles/elektron.o \
./jni/src/redox/objects/particles/molecule.o 

CPP_DEPS += \
./jni/src/redox/objects/particles/elektron.d \
./jni/src/redox/objects/particles/molecule.d 


# Each subdirectory must supply rules for building sources it contributes
jni/src/redox/objects/particles/%.o: ../jni/src/redox/objects/particles/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/Library/Frameworks/SDL2.framework/Versions/A/Headers -I"/Users/jurriaanvandenberg/Documents/Programming/C++/RedoxReactions/Redox/jni/overture/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


