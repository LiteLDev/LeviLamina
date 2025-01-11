#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class BlockPos;
class BoundingBox;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
// clang-format on

class LegacyStructureSettings {
public:
    // LegacyStructureSettings inner types declare
    // clang-format off
    struct IndexedName;
    // clang-format on

    // LegacyStructureSettings inner types define
    struct IndexedName {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkeeba32;
        ::ll::UntypedStorage<8, 8> mUnk45196e;
        // NOLINTEND

    public:
        // prevent constructor by default
        IndexedName& operator=(IndexedName const&);
        IndexedName(IndexedName const&);
        IndexedName();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk265eb0;
    ::ll::UntypedStorage<4, 4>  mUnk1f3cf6;
    ::ll::UntypedStorage<1, 1>  mUnke5f089;
    ::ll::UntypedStorage<1, 1>  mUnk79eeb4;
    ::ll::UntypedStorage<1, 1>  mUnkdee70d;
    ::ll::UntypedStorage<1, 1>  mUnka48445;
    ::ll::UntypedStorage<1, 1>  mUnkc31033;
    ::ll::UntypedStorage<1, 1>  mUnkf14e6f;
    ::ll::UntypedStorage<8, 8>  mUnkb935be;
    ::ll::UntypedStorage<8, 8>  mUnk9fad61;
    ::ll::UntypedStorage<4, 12> mUnk18f5a6;
    ::ll::UntypedStorage<4, 24> mUnkccb6f1;
    ::ll::UntypedStorage<8, 64> mUnkf3b1b1;
    ::ll::UntypedStorage<8, 8>  mUnk3e9513;
    ::ll::UntypedStorage<8, 8>  mUnk844e3f;
    ::ll::UntypedStorage<8, 24> mUnk756244;
    ::ll::UntypedStorage<8, 16> mUnk816479;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyStructureSettings();

    MCAPI LegacyStructureSettings(::LegacyStructureSettings const&);

    MCAPI LegacyStructureSettings(
        ::Mirror             mirror,
        ::Rotation           rotation,
        ::Block const*       ignoreBlock,
        ::BoundingBox const& boundingBox
    );

    MCAPI void addSwapAuxValue(int oldvariation, int variation);

    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const* getBlockRules() const;

    MCAPI ::BoundingBox const& getBoundingBox();

    MCFOLD ::Block const* getIgnoreBlock() const;

    MCAPI ::Mirror const& getMirror() const;

    MCFOLD ::BlockPos const& getRefPos() const;

    MCAPI ::Rotation const& getRotation() const;

    MCAPI ::Block const& getSwappedBlock(::BlockPalette const& palette, ::Block const& oldBlock) const;

    MCFOLD bool isIgnoreJigsawBlocks() const;

    MCFOLD bool isIgnoreStructureBlocks() const;

    MCFOLD bool isPlacingWaterBelowSeaLevel() const;

    MCAPI ::LegacyStructureSettings& operator=(::LegacyStructureSettings const&);

    MCFOLD void placeWaterBelowSeaLevel(bool water);

    MCFOLD void setBlockRules(::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const* blockRules);

    MCAPI void setBlockTagRules(::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules);

    MCAPI void setBoundingBox(::BoundingBox const& boundingBox);

    MCFOLD void setIgnoreBlock(::Block const* ignoreBlock);

    MCAPI void setIntegrity(float integrity);

    MCFOLD void setMirror(::Mirror mirror);

    MCFOLD void setProjection(::Projection projection);

    MCAPI void setRefPos(::BlockPos const& refPos);

    MCAPI void setRotation(::Rotation rotation);

    MCFOLD void setSeed(uint seed);

    MCAPI void updateBoundingBoxFromChunkPos();

    MCAPI ~LegacyStructureSettings();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& INTEGRITY_MAX();

    MCAPI static float const& INTEGRITY_MIN();

    MCAPI static int const& MAX_STRUCTURE_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::LegacyStructureSettings const&);

    MCAPI void*
    $ctor(::Mirror mirror, ::Rotation rotation, ::Block const* ignoreBlock, ::BoundingBox const& boundingBox);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
