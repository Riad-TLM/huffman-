################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f446retx.s 

OBJS += \
./Startup/startup_stm32f446retx.o 

S_DEPS += \
./Startup/startup_stm32f446retx.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.s Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"D:/Users/user/Documents/STM32CubeIDE/workspace_1.16.1/tp c/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"D:/Users/user/Documents/STM32CubeIDE/workspace_1.16.1/tp c/Drivers/CMSIS/Include" -I"D:/Users/user/Documents/STM32CubeIDE/workspace_1.16.1/tp c/Inc" -I"D:/Users/user/Documents/STM32CubeIDE/workspace_1.16.1/tp c/Src" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Startup

clean-Startup:
	-$(RM) ./Startup/startup_stm32f446retx.d ./Startup/startup_stm32f446retx.o

.PHONY: clean-Startup

