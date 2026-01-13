# MCU name
MCU = RP2350

# Bootloader selection
#   Raspberry Pi Pico 2W uses rp2040 bootloader
BOOTLOADER = rp2040

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = lite	# Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no	# Mouse keys(+4700)
EXTRAKEY_ENABLE = yes	# Audio control and System control(+450)
CONSOLE_ENABLE = no	# Console for debug(+400)
COMMAND_ENABLE = no    # Commands for debug and configuration
SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
NKRO_ENABLE = no	# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no  # Enable keyboard backlight functionality
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no
SPACE_CADET_ENABLE=no
ENCODER_ENABLE = yes
OLED_DRIVER_ENABLE = yes
HD44780_ENABLE = no
FAUXCLICKY_ENABLE = no
CONSOLE_ENABLE = no
TAP_DANCE_ENABLE = yes
POINTING_DEVICE_ENABLE = no
NO_USB_STARTUP_CHECK = yes
LEADER_ENABLE = no
UNICODE_ENABLE   = no
SRC += analog.c
MIDI_ENABLE = yes
