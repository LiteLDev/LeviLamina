#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlendingBlockType.h"
#include "mc/world/level/chunk/LevelChunk.h"

// auto generated forward declare list
// clang-format off
namespace BlendingDataFactoryUtil { struct BorderCellEntry; }
// clang-format on

namespace BlendingDataFactoryUtil {
// NOLINTBEGIN
MCAPI ::BlendingBlockType _deduceBlockTypeFromBlock(class Block const& block, class Block const& extraBlock);

MCAPI ::BlendingBlockType _processBlockTypeFromCellEntry(std::vector<::BlendingBlockType>&);

MCAPI class ChunkLocalHeight
calculateHeight(class BlendingData&, std::vector<struct BlendingDataFactoryUtil::BorderCellEntry>&, class ChunkLocalHeight, std::function<struct SubChunk&(int)>);

MCAPI void calculateSurfaceDensity(class BlendingData&, uint64 index);

MCAPI void iterateDownCellColumnUntil(
    class ChunkLocalHeight,
    std::vector<struct BlendingDataFactoryUtil::BorderCellEntry>& entries,
    int                                                           minHeight,
    std::function<struct SubChunk&(int)>,
    std::function<bool(
        struct SubChunk const&,
        struct BlendingDataFactoryUtil::BorderCellEntry&,
        class ChunkLocalHeight,
        ushort,
        int
    )> callback
);

MCAPI void processBorderCells(class LevelChunk::Neighbors, std::function<void(uint64, int, int, uint64)>);

MCAPI void setBiome(class BlendingData&, uint64 index, int, uchar biomeId);

MCAPI void setDensity(class BlendingData&, uint64 index, int, float);
// NOLINTEND

}; // namespace BlendingDataFactoryUtil
