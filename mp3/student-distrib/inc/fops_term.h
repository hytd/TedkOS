#ifndef _TERMINAL_FOPS_H
#define _TERMINAL_FOPS_H

#include <stdint.h>
#include <stddef.h>

int32_t term_write(int32_t fd, const void* buf, int32_t nbytes);
int32_t term_read(int32_t fd, void* buf, int32_t nbytes);
int32_t term_open(const uint8_t* filename);
int32_t term_close(int32_t fd);

#endif /* _TERMINAL_FOPS_H */
