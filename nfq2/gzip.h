#pragma once

#include <stdio.h>
#include <zlib.h>
#include <stdbool.h>

// hard cap on decompressed size to prevent gzip-bomb OOM
#define Z_MAX_UNCOMPRESSED (256UL*1024UL*1024UL)

int z_readfile(FILE *F, char **buf, size_t *size, size_t extra_alloc, size_t max_size);
bool is_gzip(FILE* F);
