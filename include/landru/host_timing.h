#ifndef LANDRU_HOST_TIMING_H
#define LANDRU_HOST_TIMING_H

#include <landru/config.h>
#include <stdint.h>

/* Host scheduler queries; UINT64_MAX means no pending wakeup. */
uint64_t xpal_Next_VGA_Delay_Us(void);
uint64_t xtimer_Next_Frame_Delay_Us(void);
#ifdef LANDRU_GAME_XW
uint64_t xtimer_Elapsed_Delay_Us(uint32_t ticks);
#endif

#endif
