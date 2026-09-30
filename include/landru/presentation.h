#ifndef LANDRU_PRESENTATION_H
#define LANDRU_PRESENTATION_H

#include <landru/surface.h>

#ifdef LANDRU_MODERN
/* Opt in before surface creation. All views are borrowed until publication,
 * invalidation, palette changes or module destruction; use on the owner thread. */
struct LandruPresentedFrame {
	const uint8_t* pixels;
	const uint8_t* palette;
	int width, height, stride;
	int aspect_numerator, aspect_denominator;
	uint64_t generation;
};

#endif

#endif
