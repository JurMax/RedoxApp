-include ../makefile.init

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 


include Android.mk

# All Target
all: Redox

	
Redox: $(JURMAX_SOURCE)
	@echo '!!!!Building binary in redox project'
	@echo 'Invoking: Cross G++ Linker'
	g++ -o"../../binary/main" -I/Library/Frameworks/SDL2.framework/Headers -F/Library/Frameworks -framework SDL2 $(JURMAX_SOURCE)
	@echo 'Finished building binary'
	@echo ' '
	
# Clean Target
clean:
	@echo 'Cleaning binary'
	rm -rf ../binary/main
	@echo 'Finished cleaning binary'
	@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

include $(BUILD_SHARED_LIBRARY)
