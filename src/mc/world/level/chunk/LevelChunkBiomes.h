#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class ChunkBlockPos;
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
    // prevent constructor by default
    LevelChunkBiomes& operator=(LevelChunkBiomes const&);
    LevelChunkBiomes(LevelChunkBiomes const&);
    LevelChunkBiomes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fetchBiomes(::Bedrock::small_vector_base<::gsl::not_null<::Biome const*>>& output) const;

    MCAPI void makeUniformBiomes(::Biome const& biome);

    MCAPI ::LevelChunkBiomes& operator=(::LevelChunkBiomes&& otherChunkBiomes);

    MCAPI void pruneBiomesSubChunk3D(ushort subChunkIndex, ::SubChunkStorageUnit::PruneType pruneType);

    MCAPI void rebuildMissingBiomeSubChunks(
        ushort numSubChunksToCreate,
        ushort dimensionSubchunkHeight,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const&
    );

    MCAPI void set2DBiomesFrom3D(
        ::Biome const&                                                      defaultBiome,
        ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>> const& biomeSubChunks
    );

    MCAPI void setAllBiomesFrom2D(
        ::std::array<::BiomeIdType, 256>& legacyBiomes,
        ::Biome const&                    defaultBiome,
        ::BiomeRegistry const&            biomeRegistry,
        ushort                            dimensionNumSubChunks
    );

    MCAPI void
    setBiome(::Biome const& biome, ::ChunkBlockPos const& pos, bool fillYDimension, ushort dimensionSubchunkHeight);

    MCAPI void setBiomeFromVolume(::ChunkVolume::VolumeOf<::Biome> const& volume, ushort dimensionNumSubChunks);

    MCAPI void setBiomeInSubChunk3D(
        ::Biome const&                                               biome,
        ushort                                                       subChunkIndex,
        ushort                                                       storageIndex,
        ushort                                                       dimensionSubchunkHeight,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& writeLock,
        bool                                                         allowRebuildingAdditionalSubChunk
    );

    MCAPI void setBiomeSubChunk3D(
        ::Biome const& biome,
        ushort         subChunkIndex,
        ushort         dimensionSubchunkHeight,
        bool           allowRebuildingAdditionalSubChunk
    );

    MCAPI void setBiomes(::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>> biomes, ushort biomeStackSize);

    MCAPI ~LevelChunkBiomes();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
