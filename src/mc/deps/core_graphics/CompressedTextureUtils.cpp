#include "mc/deps/core_graphics/CompressedTextureUtils.h"
#include "mc/external/render_dragon/texture_decoder/texd/CompressedBlockInfo.h"
#include "mc/external/render_dragon/texture_decoder/texd/CompressionScheme.h"
#include "mc/external/render_dragon/texture_decoder/texd/TextureDecoder.h"

namespace mce {

size_t getCompressedImageSize(mce::TextureFormat format, uint32 width, uint32 height, uint32 mipLevelCount) {
    using texd::CompressedBlockInfo;
    using texd::CompressionScheme;

    CompressionScheme scheme;
    switch (format) {
    case TextureFormat::Astc4x4:
        scheme = CompressionScheme::Astc4x4;
        break;
    case TextureFormat::Astc5x4:
        scheme = CompressionScheme::Astc5x4;
        break;
    case TextureFormat::Astc5x5:
        scheme = CompressionScheme::Astc5x5;
        break;
    case TextureFormat::Astc6x5:
        scheme = CompressionScheme::Astc6x5;
        break;
    case TextureFormat::Astc6x6:
        scheme = CompressionScheme::Astc6x6;
        break;
    case TextureFormat::Astc8x5:
        scheme = CompressionScheme::Astc8x5;
        break;
    case TextureFormat::Astc8x6:
        scheme = CompressionScheme::Astc8x6;
        break;
    case TextureFormat::Astc8x8:
        scheme = CompressionScheme::Astc8x8;
        break;
    case TextureFormat::Astc10x5:
        scheme = CompressionScheme::Astc10x5;
        break;
    case TextureFormat::Astc10x6:
        scheme = CompressionScheme::Astc10x6;
        break;
    case TextureFormat::Astc10x8:
        scheme = CompressionScheme::Astc10x8;
        break;
    case TextureFormat::Astc10x10:
        scheme = CompressionScheme::Astc10x10;
        break;
    case TextureFormat::Astc12x10:
        scheme = CompressionScheme::Astc12x10;
        break;
    case TextureFormat::Astc12x12:
        scheme = CompressionScheme::Astc12x12;
        break;
    case TextureFormat::Astc4x4Srgb:
        scheme = CompressionScheme::Astc4x4Srgb;
        break;
    case TextureFormat::Astc5x4Srgb:
        scheme = CompressionScheme::Astc5x4Srgb;
        break;
    case TextureFormat::Astc5x5Srgb:
        scheme = CompressionScheme::Astc5x5Srgb;
        break;
    case TextureFormat::Astc6x5Srgb:
        scheme = CompressionScheme::Astc6x5Srgb;
        break;
    case TextureFormat::Astc6x6Srgb:
        scheme = CompressionScheme::Astc6x6Srgb;
        break;
    case TextureFormat::Astc8x5Srgb:
        scheme = CompressionScheme::Astc8x5Srgb;
        break;
    case TextureFormat::Astc8x6Srgb:
        scheme = CompressionScheme::Astc8x6Srgb;
        break;
    case TextureFormat::Astc8x8Srgb:
        scheme = CompressionScheme::Astc8x8Srgb;
        break;
    case TextureFormat::Astc10x5Srgb:
        scheme = CompressionScheme::Astc10x5Srgb;
        break;
    case TextureFormat::Astc10x6Srgb:
        scheme = CompressionScheme::Astc10x6Srgb;
        break;
    case TextureFormat::Astc10x8Srgb:
        scheme = CompressionScheme::Astc10x8Srgb;
        break;
    case TextureFormat::Astc10x10Srgb:
        scheme = CompressionScheme::Astc10x10Srgb;
        break;
    case TextureFormat::Astc12x10Srgb:
        scheme = CompressionScheme::Astc12x10Srgb;
        break;
    case TextureFormat::Astc12x12Srgb:
        scheme = CompressionScheme::Astc12x12Srgb;
        break;
    default:
        return 0;
    }

    const CompressedBlockInfo block = texd::getCompressedBlockSize(scheme);

    uint64_t totalSize = 0;
    for (unsigned level = 0; level < mipLevelCount; ++level) {
        unsigned w = width >> level;
        if (w == 0) w = 1;
        unsigned h = height >> level;
        if (h == 0) h = 1;

        unsigned blocksX = (w + block.width - 1) / block.width;
        unsigned blocksY = (h + block.height - 1) / block.height;

        totalSize += static_cast<uint64_t>(block.sizeInBytes) * blocksX * blocksY;
    }
    return totalSize;
}

} // namespace mce