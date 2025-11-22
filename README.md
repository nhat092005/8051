# 8051 Microcontroller Projects

This repository contains my 8051 microcontroller exercises and projects, developed using the AT89C52 chip. The projects are written in both Assembly and C languages.

## Repository Structure

### AT89C52/ASM

Assembly language projects organized by lessons:

- **Bai6**: Basic assembly programming exercises
- **Bai7**: GPIO operations including CT1-CT5 circuit examples
- **Bai8_GPIO**: GPIO control projects
  - CT_CHOP_TAT: LED blinking control
  - CT_DICH: Shift operations
  - CT_HIEN_THI_GIO: Clock display
  - CT_SANG_DAN: Sequential LED turn on
  - CT_SANG_DON: Single LED control
  - CT_TAT_DAN: Sequential LED turn off
  - CT1, CT2: Basic circuit examples
- **Bai9_Timer**: Timer operations
  - CT1: Timer example 1
  - DELAY_1MS: 1 millisecond delay implementation
  - T_500MS: 500 millisecond timer
- **Bai10_INT**: Interrupt handling projects
  - BTN_INC: Button increment counter
  - CONTROL_LED: LED control using interrupts
  - CT1, CT2, CT3: Circuit examples with interrupts
  - TOOGLE_LED_3S: Toggle LED every 3 seconds
- **Others**: Additional assembly projects
  - BTN_CONTROL_LED: Button-controlled LED
- **Test**: Testing and experimental code

### AT89C52/C

C language projects organized by lessons:

- **Bai6**: Basic C programming exercises
- **Bai11**: Advanced C projects
  - BTN_COUNT: Button counter
  - CT1-CT5: Various circuit implementations
- **Test**: Testing and experimental C code

### MoPhong

Proteus simulation files for circuit design and testing:

- DontNeed_XRAM_1.pdsprj: Project without external RAM
- kitTT_SRAM_2.pdsprj: Kit with SRAM configuration
- kitTT_ver8.17.pdsprj: Main kit version 8.17

### Test

Root-level test directory with sample code and build files.

## Development Environment

- **IDE**: Keil uVision (indicated by .uvproj, .uvopt, .uvgui files)
- **Simulator**: Proteus Design Suite
- **Microcontroller**: AT89C52 (8051 family)
- **Languages**: Assembly (ASM) and C

## File Types

- .asc/.asm: Assembly source files
- .c: C source files
- .uvproj: Keil project files
- .uvopt: Keil project options
- .uvgui: Keil GUI settings
- .pdsprj: Proteus simulation projects
- .lst: Listing files
- .m51: Map files
- .lnp: Linker input files
