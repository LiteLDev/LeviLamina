#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CachedHeightGenerator {
// NOLINTBEGIN
// symbol:
// ?cachedGenerationOfTerrainHeight@CachedHeightGenerator@@YAFAEBVBlockPos@@AEAVDimension@@AEAVBlockVolume@@AEAV?$unordered_map@VChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@std@@@3@@std@@@Z
MCAPI short cachedGenerationOfTerrainHeight(
    class BlockPos const&                                                    pos,
    class Dimension&                                                         dimension,
    class BlockVolume&                                                       blockVolume,
    std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>& chunkHeightCache
);
// NOLINTEND

}; // namespace CachedHeightGenerator
