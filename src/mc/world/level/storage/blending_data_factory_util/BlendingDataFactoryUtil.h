#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/storage/BlendingBlockType.h"

// auto generated forward declare list
// clang-format off
namespace BlendingDataFactoryUtil { struct BorderCellEntry; }
// clang-format on

namespace BlendingDataFactoryUtil {
// NOLINTBEGIN
MCAPI ::BlendingBlockType _deduceBlockTypeFromBlock(class Block const& block, class Block const& extraBlock);

MCAPI ::BlendingBlockType _processBlockTypeFromCellEntry(std::vector<::BlendingBlockType>& blockTypesAbove);

MCAPI class ChunkLocalHeight calculateHeight(
    class BlendingData&                                           blendingData,
    std::vector<struct BlendingDataFactoryUtil::BorderCellEntry>& cellEntries,
    class ChunkLocalHeight                                        startingHeight,
    std::function<struct SubChunk&(int)>                          tryLoadSubchunk
);

MCAPI void calculateSurfaceDensity(class BlendingData& blendingData, uint64 index);

MCAPI void iterateDownCellColumnUntil(
    class ChunkLocalHeight                                        startingHeight,
    std::vector<struct BlendingDataFactoryUtil::BorderCellEntry>& entries,
    int                                                           minHeight,
    std::function<struct SubChunk&(int)>                          tryLoadSubchunk,
    std::function<bool(
        struct SubChunk const&,
        struct BlendingDataFactoryUtil::BorderCellEntry&,
        class ChunkLocalHeight,
        ushort,
        int
    )>                                                            callback
);

MCAPI void processBorderCells(
    class LevelChunk::Neighbors                   neighbors,
    std::function<void(uint64, int, int, uint64)> forCellColumnFunc
);

MCAPI void setBiome(class BlendingData& blendingData, uint64 index, int quadYIndex, uchar biomeId);

MCAPI void setDensity(class BlendingData& blendingData, uint64 index, int cellYIndex, float density);
// NOLINTEND

}; // namespace BlendingDataFactoryUtil
