################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/syscalls.c \
../Src/sysmem.c 

CPP_SRCS += \
../Src/App.cpp \
../Src/dio.cpp \
../Src/main.cpp \
../Src/rcc.cpp 

C_DEPS += \
./Src/syscalls.d \
./Src/sysmem.d 

OBJS += \
./Src/App.o \
./Src/dio.o \
./Src/main.o \
./Src/rcc.o \
./Src/syscalls.o \
./Src/sysmem.o 

CPP_DEPS += \
./Src/App.d \
./Src/dio.d \
./Src/main.d \
./Src/rcc.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su: ../Src/%.cpp Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DSTM32H750VBTx -DSTM32 -DSTM32H7SINGLE -DSTM32H7 -c -I../Inc -I"/home/ghita/STM32CubeIDE/workspace_1.11.0/totalcpp/incstm" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/%.o Src/%.su: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32H750VBTx -DSTM32 -DSTM32H7SINGLE -DSTM32H7 -c -I../Inc -I"/home/ghita/STM32CubeIDE/workspace_1.11.0/totalcpp/incstm" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/App.d ./Src/App.o ./Src/App.su ./Src/dio.d ./Src/dio.o ./Src/dio.su ./Src/main.d ./Src/main.o ./Src/main.su ./Src/rcc.d ./Src/rcc.o ./Src/rcc.su ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

