#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/world/level/block/chunk_volume/SubVolumeViewOf.h"

namespace ChunkVolume {

template <typename T>
class VolumeOf {
public:
    using ElementType      = T const*;
    using SubViewType      = SubVolumeViewOf<T const*>;
    using ConstSubViewType = SubVolumeViewOf<T const* const>;

    size_t                             mNumSubChunks;
    std::vector<std::vector<T const*>> mSubChunkVectors;

public:
    MCAPI void build(size_t numSubChunks, ElementType const& initValue);
};

} // namespace ChunkVolume
