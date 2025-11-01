#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/LevelChunk.h"

// auto generated forward declare list
// clang-format off
class BlendingData;
class ChunkLocalHeight;
struct SubChunk;
namespace BlendingDataFactoryUtil { struct BorderCellEntry; }
// clang-format on

namespace BlendingDataFactoryUtil {
// functions
// NOLINTBEGIN
MCNAPI void calculateSurfaceDensity(::BlendingData& blendingData, uint64 index);

MCNAPI void iterateDownCellColumnUntil(
    ::ChunkLocalHeight                                         startingHeight,
    ::std::vector<::BlendingDataFactoryUtil::BorderCellEntry>& entries,
    int                                                        minHeight,
    ::std::function<::SubChunk&(int)>                          tryLoadSubchunk,
    ::std::function<
        bool(::SubChunk const&, ::BlendingDataFactoryUtil::BorderCellEntry&, ::ChunkLocalHeight, ushort, int)> callback
);

MCNAPI void processBorderCells(
    ::LevelChunk::Neighbors                         neighbors,
    ::std::function<void(uint64, int, int, uint64)> forCellColumnFunc
);
// NOLINTEND

} // namespace BlendingDataFactoryUtil
