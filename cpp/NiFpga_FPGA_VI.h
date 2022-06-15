/*
 * Generated with the FPGA Interface C API Generator 19.0
 * for NI-RIO 19.0 or later.
 */
#ifndef __NiFpga_FPGA_VI_h__
#define __NiFpga_FPGA_VI_h__

#ifndef NiFpga_Version
   #define NiFpga_Version 190
#endif

#include "NiFpga.h"

/**
 * The filename of the FPGA bitfile.
 *
 * This is a #define to allow for string literal concatenation. For example:
 *
 *    static const char* const Bitfile = "C:\\" NiFpga_FPGA_VI_Bitfile;
 */
#define NiFpga_FPGA_VI_Bitfile "NiFpga_FPGA_VI.lvbitx"

/**
 * The signature of the FPGA bitfile.
 */
static const char* const NiFpga_FPGA_VI_Signature = "8ECD93F233910FA6191DA34CCD233610";

#if NiFpga_Cpp
extern "C"
{
#endif

typedef enum
{
   NiFpga_FPGA_VI_ControlBool_LED0 = 0x18002,
   NiFpga_FPGA_VI_ControlBool_LED1 = 0x18006,
} NiFpga_FPGA_VI_ControlBool;

typedef enum
{
   NiFpga_FPGA_VI_ControlU32_WaitmSec = 0x18008,
} NiFpga_FPGA_VI_ControlU32;


#if NiFpga_Cpp
}
#endif

#endif
