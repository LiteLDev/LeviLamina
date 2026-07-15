#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

class LevelChunkBiomes {
public:
    // LevelChunkBiomes inner types declare
    // clang-format off
    struct MemoryEstimateData;
    // clang-format on

    // LevelChunkBiomes inner types define
    struct MemoryEstimateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mBiomeData3DSize;
        ::ll::TypedStorage<8, 8, uint64> mMinBiomePaletteSize;
        ::ll::TypedStorage<8, 8, double> mAverageBiomePaletteSize;
        ::ll::TypedStorage<8, 8, uint64> mMaxBiomePaletteSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 512, ::std::array<::BiomeIdType, 256>>                            m2DBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> mBiomeSubchunks;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                           mBiomesMutex;
    ::ll::TypedStorage<2, 2, ushort>                                                        m3dBiomeStackSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fetchBiomes(::Bedrock::small_vector_base<::gsl::not_null<::Biome const*>>& output) const;

    MCAPI void makeUniformBiomes(::Biome const& biome);

    MCAPI void pruneBiomesSubChunk3D(ushort subChunkIndex, ::SubChunkStorageUnit::PruneType pruneType);

    MCAPI void setBiomeFromVolume(::ChunkVolume::VolumeOf<::Biome> const& volume, ushort dimensionNumSubChunks);

    MCAPI void setBiomeSubChunk3D(
        ::Biome const& biome,
        ushort         subChunkIndex,
        ushort         dimensionSubchunkHeight,
        bool           allowRebuildingAdditionalSubChunk
    );

#ifdef LL_PLAT_C
    MCAPI void setBiomes(::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>> biomes, ushort biomeStackSize);
#endif
    // NOLINTEND
};
