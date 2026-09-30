#ifndef LANDRU_CONFIG_H
#define LANDRU_CONFIG_H

#include <stdbool.h>
#include <stdint.h>

#if defined(LANDRU_GAME_XW) && defined(LANDRU_GAME_TIE)
#error Select only one Landru game version
#endif

#if !defined(LANDRU_GAME_XW) && !defined(LANDRU_GAME_TIE)
#define LANDRU_GAME_TIE
#endif

/* Landru's boolean results are 16-bit words in every original executable. */
typedef int16_t LandruBoolResult;

enum { LANDRU_RESOURCE_NAME_LENGTH = 8 };

/* res_name capacity of TIE actor, film, palette and sound records. The 1998
 * Windows Landru reserves a ninth byte; a build selects it by defining this. */
#ifndef LANDRU_RECORD_NAME_CAPACITY
#define LANDRU_RECORD_NAME_CAPACITY LANDRU_RESOURCE_NAME_LENGTH
#endif

#endif
