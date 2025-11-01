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
class FlatWorldOptions;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mPrototypeBlocks;
    ::ll::TypedStorage<8, 40, ::BlockVolume> mPrototype;
    ::ll::TypedStorage<1, 1, bool> mIsVoidWorld;
    ::ll::TypedStorage<8, 8, ::Biome const*> mBiome;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FixedBiomeSource>> mBiomeSource;
    ::ll::TypedStorage<2, 2, short> mMaxHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 14
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    // vIndex: 9
    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;

    // vIndex: 10
    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;

    // vIndex: 37
    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const& pos) /*override*/;

    // vIndex: 38
    virtual bool isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const /*override*/;

    // vIndex: 39
    virtual bool findNearestStructureFeature(::HashedString feature, ::BlockPos const& origin, ::BlockPos& pos, bool mustBeInNewChunks, ::std::optional<::HashedString> biomeTag) /*override*/;

    // vIndex: 42
    virtual void prepareHeights(::BlockVolume& box, ::ChunkPos const&, ::std::vector<short>* zxHeights, bool) /*override*/;

    // vIndex: 41
    virtual void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks) /*override*/;

    // vIndex: 43
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    // vIndex: 46
    virtual ::BlockPos findSpawnPosition() const /*override*/;

    // vIndex: 44
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    // vIndex: 45
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    // vIndex: 49
    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const /*override*/;

    // vIndex: 50
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const /*override*/;

    // vIndex: 0
    virtual ~FlatWorldGenerator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlatWorldGenerator(::Dimension& dimension, uint, ::Json::Value const& generationOptionsJSON);

    MCAPI void _generatePrototypeBlockValues(::FlatWorldOptions const& layersDesc, short minHeight);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, uint, ::Json::Value const& generationOptionsJSON);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCFOLD bool $structurePostProcessChunk(::ChunkViewSource&);

    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhood);

    MCFOLD ::HashedString $findStructureFeatureTypeAt(::BlockPos const& pos);

    MCAPI bool $isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;

    MCAPI bool $findNearestStructureFeature(::HashedString feature, ::BlockPos const& origin, ::BlockPos& pos, bool mustBeInNewChunks, ::std::optional<::HashedString> biomeTag);

    MCAPI void $prepareHeights(::BlockVolume& box, ::ChunkPos const&, ::std::vector<short>* zxHeights, bool);

    MCFOLD void $garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks);

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BlockPos $findSpawnPosition() const;

    MCAPI ::BiomeSource const& $getBiomeSource() const;

    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCFOLD void $decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;

    MCFOLD void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCNAPI static void** $vftableForChunkSource();
    // NOLINTEND

};
