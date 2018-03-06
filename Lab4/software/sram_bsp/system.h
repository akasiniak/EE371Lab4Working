/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'processor'
 * SOPC Builder design path: ../../processor.sopcinfo
 *
 * Generated: Tue Mar 06 02:03:43 PST 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00040820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "small"
#define ALT_CPU_DATA_ADDR_WIDTH 0x13
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00020020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 2048
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_RESET_ADDR 0x00020000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00040820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "small"
#define NIOS2_DATA_ADDR_WIDTH 0x13
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00020020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 2048
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_RESET_ADDR 0x00020000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x410c8
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x410c8
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x410c8
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "processor"


/*
 * address configuration
 *
 */

#define ADDRESS_BASE 0x41020
#define ADDRESS_BIT_CLEARING_EDGE_REGISTER 0
#define ADDRESS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ADDRESS_CAPTURE 0
#define ADDRESS_DATA_WIDTH 11
#define ADDRESS_DO_TEST_BENCH_WIRING 0
#define ADDRESS_DRIVEN_SIM_VALUE 0
#define ADDRESS_EDGE_TYPE "NONE"
#define ADDRESS_FREQ 50000000
#define ADDRESS_HAS_IN 0
#define ADDRESS_HAS_OUT 1
#define ADDRESS_HAS_TRI 0
#define ADDRESS_IRQ -1
#define ADDRESS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ADDRESS_IRQ_TYPE "NONE"
#define ADDRESS_NAME "/dev/address"
#define ADDRESS_RESET_VALUE 0
#define ADDRESS_SPAN 16
#define ADDRESS_TYPE "altera_avalon_pio"
#define ALT_MODULE_CLASS_address altera_avalon_pio


/*
 * characterReceived configuration
 *
 */

#define ALT_MODULE_CLASS_characterReceived altera_avalon_pio
#define CHARACTERRECEIVED_BASE 0x41070
#define CHARACTERRECEIVED_BIT_CLEARING_EDGE_REGISTER 0
#define CHARACTERRECEIVED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CHARACTERRECEIVED_CAPTURE 0
#define CHARACTERRECEIVED_DATA_WIDTH 1
#define CHARACTERRECEIVED_DO_TEST_BENCH_WIRING 0
#define CHARACTERRECEIVED_DRIVEN_SIM_VALUE 0
#define CHARACTERRECEIVED_EDGE_TYPE "NONE"
#define CHARACTERRECEIVED_FREQ 50000000
#define CHARACTERRECEIVED_HAS_IN 1
#define CHARACTERRECEIVED_HAS_OUT 0
#define CHARACTERRECEIVED_HAS_TRI 0
#define CHARACTERRECEIVED_IRQ -1
#define CHARACTERRECEIVED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CHARACTERRECEIVED_IRQ_TYPE "NONE"
#define CHARACTERRECEIVED_NAME "/dev/characterReceived"
#define CHARACTERRECEIVED_RESET_VALUE 0
#define CHARACTERRECEIVED_SPAN 16
#define CHARACTERRECEIVED_TYPE "altera_avalon_pio"


/*
 * characterSent configuration
 *
 */

#define ALT_MODULE_CLASS_characterSent altera_avalon_pio
#define CHARACTERSENT_BASE 0x41060
#define CHARACTERSENT_BIT_CLEARING_EDGE_REGISTER 0
#define CHARACTERSENT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CHARACTERSENT_CAPTURE 0
#define CHARACTERSENT_DATA_WIDTH 1
#define CHARACTERSENT_DO_TEST_BENCH_WIRING 0
#define CHARACTERSENT_DRIVEN_SIM_VALUE 0
#define CHARACTERSENT_EDGE_TYPE "NONE"
#define CHARACTERSENT_FREQ 50000000
#define CHARACTERSENT_HAS_IN 1
#define CHARACTERSENT_HAS_OUT 0
#define CHARACTERSENT_HAS_TRI 0
#define CHARACTERSENT_IRQ -1
#define CHARACTERSENT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CHARACTERSENT_IRQ_TYPE "NONE"
#define CHARACTERSENT_NAME "/dev/characterSent"
#define CHARACTERSENT_RESET_VALUE 0
#define CHARACTERSENT_SPAN 16
#define CHARACTERSENT_TYPE "altera_avalon_pio"


/*
 * dataIn configuration
 *
 */

#define ALT_MODULE_CLASS_dataIn altera_avalon_pio
#define DATAIN_BASE 0x41040
#define DATAIN_BIT_CLEARING_EDGE_REGISTER 0
#define DATAIN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DATAIN_CAPTURE 0
#define DATAIN_DATA_WIDTH 8
#define DATAIN_DO_TEST_BENCH_WIRING 0
#define DATAIN_DRIVEN_SIM_VALUE 0
#define DATAIN_EDGE_TYPE "NONE"
#define DATAIN_FREQ 50000000
#define DATAIN_HAS_IN 1
#define DATAIN_HAS_OUT 0
#define DATAIN_HAS_TRI 0
#define DATAIN_IRQ -1
#define DATAIN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DATAIN_IRQ_TYPE "NONE"
#define DATAIN_NAME "/dev/dataIn"
#define DATAIN_RESET_VALUE 0
#define DATAIN_SPAN 16
#define DATAIN_TYPE "altera_avalon_pio"


/*
 * dataOut configuration
 *
 */

#define ALT_MODULE_CLASS_dataOut altera_avalon_pio
#define DATAOUT_BASE 0x41030
#define DATAOUT_BIT_CLEARING_EDGE_REGISTER 0
#define DATAOUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DATAOUT_CAPTURE 0
#define DATAOUT_DATA_WIDTH 8
#define DATAOUT_DO_TEST_BENCH_WIRING 0
#define DATAOUT_DRIVEN_SIM_VALUE 0
#define DATAOUT_EDGE_TYPE "NONE"
#define DATAOUT_FREQ 50000000
#define DATAOUT_HAS_IN 0
#define DATAOUT_HAS_OUT 1
#define DATAOUT_HAS_TRI 0
#define DATAOUT_IRQ -1
#define DATAOUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DATAOUT_IRQ_TYPE "NONE"
#define DATAOUT_NAME "/dev/dataOut"
#define DATAOUT_RESET_VALUE 0
#define DATAOUT_SPAN 16
#define DATAOUT_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK SYS_CLK_TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x410c8
#define JTAG_UART_IRQ 16
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * load configuration
 *
 */

#define ALT_MODULE_CLASS_load altera_avalon_pio
#define LOAD_BASE 0x41080
#define LOAD_BIT_CLEARING_EDGE_REGISTER 0
#define LOAD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LOAD_CAPTURE 0
#define LOAD_DATA_WIDTH 1
#define LOAD_DO_TEST_BENCH_WIRING 0
#define LOAD_DRIVEN_SIM_VALUE 0
#define LOAD_EDGE_TYPE "NONE"
#define LOAD_FREQ 50000000
#define LOAD_HAS_IN 0
#define LOAD_HAS_OUT 1
#define LOAD_HAS_TRI 0
#define LOAD_IRQ -1
#define LOAD_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LOAD_IRQ_TYPE "NONE"
#define LOAD_NAME "/dev/load"
#define LOAD_RESET_VALUE 0
#define LOAD_SPAN 16
#define LOAD_TYPE "altera_avalon_pio"


/*
 * onchip_mem configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_mem altera_avalon_onchip_memory2
#define ONCHIP_MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEM_BASE 0x20000
#define ONCHIP_MEM_CONTENTS_INFO ""
#define ONCHIP_MEM_DUAL_PORT 0
#define ONCHIP_MEM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEM_INIT_CONTENTS_FILE "processor_onchip_mem"
#define ONCHIP_MEM_INIT_MEM_CONTENT 1
#define ONCHIP_MEM_INSTANCE_ID "NONE"
#define ONCHIP_MEM_IRQ -1
#define ONCHIP_MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEM_NAME "/dev/onchip_mem"
#define ONCHIP_MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEM_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEM_SINGLE_CLOCK_OP 0
#define ONCHIP_MEM_SIZE_MULTIPLE 1
#define ONCHIP_MEM_SIZE_VALUE 81920
#define ONCHIP_MEM_SPAN 81920
#define ONCHIP_MEM_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEM_WRITABLE 1


/*
 * parallelInput configuration
 *
 */

#define ALT_MODULE_CLASS_parallelInput altera_avalon_pio
#define PARALLELINPUT_BASE 0x410a0
#define PARALLELINPUT_BIT_CLEARING_EDGE_REGISTER 0
#define PARALLELINPUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PARALLELINPUT_CAPTURE 0
#define PARALLELINPUT_DATA_WIDTH 8
#define PARALLELINPUT_DO_TEST_BENCH_WIRING 0
#define PARALLELINPUT_DRIVEN_SIM_VALUE 0
#define PARALLELINPUT_EDGE_TYPE "NONE"
#define PARALLELINPUT_FREQ 50000000
#define PARALLELINPUT_HAS_IN 1
#define PARALLELINPUT_HAS_OUT 0
#define PARALLELINPUT_HAS_TRI 0
#define PARALLELINPUT_IRQ -1
#define PARALLELINPUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PARALLELINPUT_IRQ_TYPE "NONE"
#define PARALLELINPUT_NAME "/dev/parallelInput"
#define PARALLELINPUT_RESET_VALUE 0
#define PARALLELINPUT_SPAN 16
#define PARALLELINPUT_TYPE "altera_avalon_pio"


/*
 * parallelOutput configuration
 *
 */

#define ALT_MODULE_CLASS_parallelOutput altera_avalon_pio
#define PARALLELOUTPUT_BASE 0x410b0
#define PARALLELOUTPUT_BIT_CLEARING_EDGE_REGISTER 0
#define PARALLELOUTPUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PARALLELOUTPUT_CAPTURE 0
#define PARALLELOUTPUT_DATA_WIDTH 8
#define PARALLELOUTPUT_DO_TEST_BENCH_WIRING 0
#define PARALLELOUTPUT_DRIVEN_SIM_VALUE 0
#define PARALLELOUTPUT_EDGE_TYPE "NONE"
#define PARALLELOUTPUT_FREQ 50000000
#define PARALLELOUTPUT_HAS_IN 0
#define PARALLELOUTPUT_HAS_OUT 1
#define PARALLELOUTPUT_HAS_TRI 0
#define PARALLELOUTPUT_IRQ -1
#define PARALLELOUTPUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PARALLELOUTPUT_IRQ_TYPE "NONE"
#define PARALLELOUTPUT_NAME "/dev/parallelOutput"
#define PARALLELOUTPUT_RESET_VALUE 255
#define PARALLELOUTPUT_SPAN 16
#define PARALLELOUTPUT_TYPE "altera_avalon_pio"


/*
 * ramControls configuration
 *
 */

#define ALT_MODULE_CLASS_ramControls altera_avalon_pio
#define RAMCONTROLS_BASE 0x41050
#define RAMCONTROLS_BIT_CLEARING_EDGE_REGISTER 0
#define RAMCONTROLS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RAMCONTROLS_CAPTURE 0
#define RAMCONTROLS_DATA_WIDTH 3
#define RAMCONTROLS_DO_TEST_BENCH_WIRING 0
#define RAMCONTROLS_DRIVEN_SIM_VALUE 0
#define RAMCONTROLS_EDGE_TYPE "NONE"
#define RAMCONTROLS_FREQ 50000000
#define RAMCONTROLS_HAS_IN 0
#define RAMCONTROLS_HAS_OUT 1
#define RAMCONTROLS_HAS_TRI 0
#define RAMCONTROLS_IRQ -1
#define RAMCONTROLS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAMCONTROLS_IRQ_TYPE "NONE"
#define RAMCONTROLS_NAME "/dev/ramControls"
#define RAMCONTROLS_RESET_VALUE 0
#define RAMCONTROLS_SPAN 16
#define RAMCONTROLS_TYPE "altera_avalon_pio"


/*
 * sys_clk_timer configuration
 *
 */

#define ALT_MODULE_CLASS_sys_clk_timer altera_avalon_timer
#define SYS_CLK_TIMER_ALWAYS_RUN 0
#define SYS_CLK_TIMER_BASE 0x41000
#define SYS_CLK_TIMER_COUNTER_SIZE 32
#define SYS_CLK_TIMER_FIXED_PERIOD 0
#define SYS_CLK_TIMER_FREQ 50000000
#define SYS_CLK_TIMER_IRQ 1
#define SYS_CLK_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYS_CLK_TIMER_LOAD_VALUE 49999
#define SYS_CLK_TIMER_MULT 0.001
#define SYS_CLK_TIMER_NAME "/dev/sys_clk_timer"
#define SYS_CLK_TIMER_PERIOD 1
#define SYS_CLK_TIMER_PERIOD_UNITS "ms"
#define SYS_CLK_TIMER_RESET_OUTPUT 0
#define SYS_CLK_TIMER_SNAPSHOT 1
#define SYS_CLK_TIMER_SPAN 32
#define SYS_CLK_TIMER_TICKS_PER_SEC 1000
#define SYS_CLK_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define SYS_CLK_TIMER_TYPE "altera_avalon_timer"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x410c0
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1520330000
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * transmitEnable configuration
 *
 */

#define ALT_MODULE_CLASS_transmitEnable altera_avalon_pio
#define TRANSMITENABLE_BASE 0x41090
#define TRANSMITENABLE_BIT_CLEARING_EDGE_REGISTER 0
#define TRANSMITENABLE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TRANSMITENABLE_CAPTURE 0
#define TRANSMITENABLE_DATA_WIDTH 1
#define TRANSMITENABLE_DO_TEST_BENCH_WIRING 0
#define TRANSMITENABLE_DRIVEN_SIM_VALUE 0
#define TRANSMITENABLE_EDGE_TYPE "NONE"
#define TRANSMITENABLE_FREQ 50000000
#define TRANSMITENABLE_HAS_IN 0
#define TRANSMITENABLE_HAS_OUT 1
#define TRANSMITENABLE_HAS_TRI 0
#define TRANSMITENABLE_IRQ -1
#define TRANSMITENABLE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TRANSMITENABLE_IRQ_TYPE "NONE"
#define TRANSMITENABLE_NAME "/dev/transmitEnable"
#define TRANSMITENABLE_RESET_VALUE 0
#define TRANSMITENABLE_SPAN 16
#define TRANSMITENABLE_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
