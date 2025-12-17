#pragma once
#include "mc/external/render_dragon/texture_decoder/texd/CompressionScheme.h"

namespace texd {
struct CompressedBlockInfo;
};

namespace texd {
CompressedBlockInfo getCompressedBlockSize(CompressionScheme scheme);
};