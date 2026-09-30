#ifndef LANDRU_HOST_VIDEO_H
#define LANDRU_HOST_VIDEO_H

#include <landru/config.h>
#include <stdbool.h>
#include <stdint.h>

bool landru_host_has_platform_video(void);
void landru_host_video_set_mode(uint16_t mode);
void landru_host_video_lock(void);
void landru_host_video_unlock(void);
void landru_host_video_copy_to_present_surface(void);
void landru_host_video_present(void);
#ifdef LANDRU_MODERN
void landru_host_video_logical_size_changed(int width, int height);
#endif

#endif
