################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Kolokvijum.lss \

FLASH_IMAGE += \
Kolokvijum.hex \

EEPROM_IMAGE += \
Kolokvijum.eep \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Kolokvijum.elf secondary-outputs

# Tool invocations
Kolokvijum.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Kolokvijum.map -L"C:\Users\elena\Desktop\RSzDMK_-kolokvijum_1\usart\Debug" -L"C:\Users\elena\Desktop\RSzDMK_-kolokvijum_1\timer0\Debug" -mmcu=atmega328p -o "Kolokvijum.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Kolokvijum.lss: Kolokvijum.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Kolokvijum.elf  >"Kolokvijum.lss"
	@echo 'Finished building: $@'
	@echo ' '

Kolokvijum.hex: Kolokvijum.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Kolokvijum.elf  "Kolokvijum.hex"
	@echo 'Finished building: $@'
	@echo ' '

Kolokvijum.eep: Kolokvijum.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Kolokvijum.elf  "Kolokvijum.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Kolokvijum.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Kolokvijum.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Kolokvijum.elf
	@echo 'Invoking: AVRDude'
	C:\WinAVR-20100110\bin\avrdude -pm328p -Uflash:w:Kolokvijum.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Kolokvijum.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
