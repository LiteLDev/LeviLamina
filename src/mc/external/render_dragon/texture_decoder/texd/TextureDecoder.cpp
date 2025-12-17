#include "mc/external/render_dragon/texture_decoder/texd/TextureDecoder.h"
#include "mc/external/render_dragon/texture_decoder/texd/CompressedBlockInfo.h"

namespace texd {
CompressedBlockInfo getCompressedBlockSize(CompressionScheme scheme) {
    CompressedBlockInfo info{};

    switch (scheme) {
    case CompressionScheme::Astc4x4:
    case CompressionScheme::Astc4x4Srgb:
        info = {4, 4, 16};
        break;

    case CompressionScheme::Astc5x4:
    case CompressionScheme::Astc5x4Srgb:
        info = {5, 4, 16};
        break;

    case CompressionScheme::Astc5x5:
    case CompressionScheme::Astc5x5Srgb:
        info = {5, 5, 16};
        break;

    case CompressionScheme::Astc6x5:
    case CompressionScheme::Astc6x5Srgb:
        info = {6, 5, 16};
        break;

    case CompressionScheme::Astc6x6:
    case CompressionScheme::Astc6x6Srgb:
        info = {6, 6, 16};
        break;

    case CompressionScheme::Astc8x5:
    case CompressionScheme::Astc8x5Srgb:
        info = {8, 5, 16};
        break;

    case CompressionScheme::Astc8x6:
    case CompressionScheme::Astc8x6Srgb:
        info = {8, 6, 16};
        break;

    case CompressionScheme::Astc8x8:
    case CompressionScheme::Astc8x8Srgb:
        info = {8, 8, 16};
        break;

    case CompressionScheme::Astc10x5:
    case CompressionScheme::Astc10x5Srgb:
        info = {10, 5, 16};
        break;

    case CompressionScheme::Astc10x6:
    case CompressionScheme::Astc10x6Srgb:
        info = {10, 6, 16};
        break;

    case CompressionScheme::Astc10x8:
    case CompressionScheme::Astc10x8Srgb:
        info = {10, 8, 16};
        break;

    case CompressionScheme::Astc10x10:
    case CompressionScheme::Astc10x10Srgb:
        info = {10, 10, 16};
        break;

    case CompressionScheme::Astc12x10:
    case CompressionScheme::Astc12x10Srgb:
        info = {12, 10, 16};
        break;

    case CompressionScheme::Astc12x12:
    case CompressionScheme::Astc12x12Srgb:
        info = {12, 12, 16};
        break;

    default:
        info = {0, 0, 0};
        break;
    }

    return info;
}

} // namespace texd