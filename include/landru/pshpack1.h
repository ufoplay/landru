/* Begins records that use the byte packing of the original Landru libraries.
 * Matching builds define LANDRU_ORIGINAL_LAYOUT; modern builds keep natural
 * alignment. Pair every inclusion with <landru/poppack.h>; regions must not
 * nest, since Watcom 10 has no pack stack. */
#ifdef LANDRU_ORIGINAL_LAYOUT
#ifdef __WATCOMC__
#pragma pack(1)
#else
#pragma pack(push, 1)
#endif
#endif
