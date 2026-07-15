#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolumeTarget;
class BoundingBox;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class FixedBiomeSource;
class HashedString;
class LevelChunk;
class Random;
namespace Json { class Value; }
// clang-format on

class FlatWorldGenerator : public ::WorldGenerator {
public:
    // FlatWorldGenerator inner types define
    using LayerList = ::std::vector<::Block const*>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>        mPrototypeBlocks;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                        mPrototype;
    ::ll::TypedStorage<1, 1, bool>                                  mIsVoidWorld;
    ::ll::TypedStorage<8, 8, ::Biome const*>                        mBiome;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FixedBiomeSource>> mBiomeSource;
    ::ll::TypedStorage<2, 2, short>                                 mMaxHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const& pos) /*override*/;

    virtual bool isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const /*override*/;

    virtual bool findNearestStructureFeature(
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    ) /*override*/;

    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, ::std::vector<short>*, bool) /*override*/;

    virtual void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks) /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const /*override*/;

    virtual ::BlockPos findSpawnPosition() const /*override*/;

    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    virtual void
    decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const
        /*override*/;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlatWorldGenerator(::Dimension& dimension, uint, ::Json::Value const& generationOptionsJSON);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, uint, ::Json::Value const& generationOptionsJSON);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
