################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/bsp.c \
../src/cr_startup_lpc175x_6x.c \
../src/crp.c \
../src/main.c 

OBJS += \
./src/bsp.o \
./src/cr_startup_lpc175x_6x.o \
./src/crp.o \
./src/main.o 

C_DEPS += \
./src/bsp.d \
./src/cr_startup_lpc175x_6x.d \
./src/crp.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__USE_CMSIS=CMSIS_CORE_LPC17xx -D__LPC17XX__ -D__REDLIB__ -I"/home/carles/git/LPCXpresso/Blink_RGB_LED/inc" -I"/home/carles/LPCXpresso/workspace/CMSIS_CORE_LPC17xx/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


