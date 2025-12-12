#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

enum class CompressionScheme : uint {
    None          = 0,
    Dxt1Rgb       = 33776,
    Dxt1Rgba      = 33777,
    Dxt3Rgba      = 33778,
    Dxt5Rgba      = 33779,
    Astc4x4       = 37808,
    Astc5x4       = 37809,
    Astc5x5       = 37810,
    Astc6x5       = 37811,
    Astc6x6       = 37812,
    Astc8x5       = 37813,
    Astc8x6       = 37814,
    Astc8x8       = 37815,
    Astc10x5      = 37816,
    Astc10x6      = 37817,
    Astc10x8      = 37818,
    Astc10x10     = 37819,
    Astc12x10     = 37820,
    Astc12x12     = 37821,
    Astc4x4Srgb   = 37840,
    Astc5x4Srgb   = 37841,
    Astc5x5Srgb   = 37842,
    Astc6x5Srgb   = 37843,
    Astc6x6Srgb   = 37844,
    Astc8x5Srgb   = 37845,
    Astc8x6Srgb   = 37846,
    Astc8x8Srgb   = 37847,
    Astc10x5Srgb  = 37848,
    Astc10x6Srgb  = 37849,
    Astc10x8Srgb  = 37850,
    Astc10x10Srgb = 37851,
    Astc12x10Srgb = 37852,
    Astc12x12Srgb = 37853,
};

}
