/*********************************************************************
*               (c) SEGGER Microcontroller GmbH & Co. KG             *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************
----------------------------------------------------------------------
File    : FlashDev.c
Purpose : Flash device description Template
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "FlashOS.h"

struct FlashDevice const FlashDevice __attribute__ ((section ("DevDscr"))) =  {
  ALGO_VERSION,              // Algo version
  "1986VE81T",                // Flash device name
  ONCHIP,                    // Flash device type
  0x01000000,                // Flash base address
  0x00020000,                // Total flash device size in Bytes (256 KB)
  512,                       // Page Size (number of bytes that will be passed to ProgramPage(). May be multiple of min alignment in order to reduce overhead for calling ProgramPage multiple times
  0,                         // Reserved, should be 0
  0xFF,                      // Flash erased value
  1000,                      // Program page timeout in ms
  1000,                      // Erase sector timeout in ms
  //
  // Flash sector layout definition
  //
  0x00000200, 0x00000000,   // 256 *  512B =  128 KB
  0xFFFFFFFF, 0xFFFFFFFF    // Indicates the end of the flash sector layout. Must be present.
};