################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Chassis.cpp \
../Motor.cpp \
../Shooter.cpp \
../SmartMotor.cpp \
../robot.cpp 

OBJS += \
./Chassis.o \
./Motor.o \
./Shooter.o \
./SmartMotor.o \
./robot.o 

CPP_DEPS += \
./Chassis.d \
./Motor.d \
./Shooter.d \
./SmartMotor.d \
./robot.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


