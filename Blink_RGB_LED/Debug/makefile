################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Blink_RGB_LED.axf

# Tool invocations
Blink_RGB_LED.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"/home/carles/LPCXpresso/workspace/CMSIS_CORE_LPC17xx/Debug" -Xlinker -Map="Blink_RGB_LED.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "prova_Debug.ld" -o "Blink_RGB_LED.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) Blink_RGB_LED.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "Blink_RGB_LED.axf"; # arm-none-eabi-objcopy -v -O binary "Blink_RGB_LED.axf" "Blink_RGB_LED.bin" ; # checksum -p LPC1769 -d "Blink_RGB_LED.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
