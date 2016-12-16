################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/specs.c 

CPP_SRCS += \
../jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/specs.cpp 

OBJS += \
./jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/specs.o 

C_DEPS += \
./jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/specs.d 

CPP_DEPS += \
./jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/specs.d 


# Each subdirectory must supply rules for building sources it contributes
jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/%.o: ../jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/%.o: ../jni/src/.metadata/.plugins/org.eclipse.cdt.make.core/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/Library/Frameworks/SDL2.framework/Versions/A/Headers -I"/Users/jurriaanvandenberg/Documents/Programming/C++/RedoxReactions/Redox/jni/overture/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


