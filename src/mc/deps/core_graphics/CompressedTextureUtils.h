#pragma once
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace mce {
size_t getCompressedImageSize(mce::TextureFormat format, uint32 width, uint32 height, uint32 mipLevelCount);
}