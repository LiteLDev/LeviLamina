#pragma once
#include "mc/external/render_dragon/texture_decoder/texd/CompressionScheme.h"

namespace texd {
struct CompressedBlockInfo;
};

namespace texd {
LLAPI CompressedBlockInfo getCompressedBlockSize(CompressionScheme scheme);
};
