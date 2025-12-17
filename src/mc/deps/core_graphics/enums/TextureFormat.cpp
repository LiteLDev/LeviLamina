#pragma once
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace mce {
mce::TextureFormat translateImageFormat(const mce::ImageFormat imageFormat) {
    switch (imageFormat) {
    case ImageFormat::Unknown:
        return TextureFormat::UnknownTextureFormat;

    case ImageFormat::R8Unorm:
        return TextureFormat::R8Unorm;

    case ImageFormat::RG8Unorm:
        return TextureFormat::R8g8Unorm;

    case ImageFormat::RGB8Unorm:
        return TextureFormat::R8g8b8Unorm;

    case ImageFormat::RGBA8Unorm:
        return TextureFormat::R8g8b8a8Unorm;

    case ImageFormat::RGBA16Float:
        return TextureFormat::R16g16b16a16Float;

    default:
        return TextureFormat::UnknownTextureFormat;
    }
}
} // namespace mce