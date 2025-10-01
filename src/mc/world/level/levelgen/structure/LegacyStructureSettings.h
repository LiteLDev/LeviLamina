#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class HashedString;
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
        ::ll::TypedStorage<8, 8, uint64> mGroupIndex;
        ::ll::TypedStorage<8, 8, uint64> mBlockIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                             mIntegrity;
    ::ll::TypedStorage<4, 4, uint>                                                              mSeed;
    ::ll::TypedStorage<1, 1, ::Projection>                                                      mProjection;
    ::ll::TypedStorage<1, 1, ::Mirror>                                                          mMirror;
    ::ll::TypedStorage<1, 1, ::Rotation>                                                        mRotation;
    ::ll::TypedStorage<1, 1, bool>                                                              mIgnoreStructureBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                              mIgnoreJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                              mWaterBelowSeaLevel;
    ::ll::TypedStorage<8, 8, ::Block const*>                                                    mIgnoreBlock;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                        mChunkPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                       mRefPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                    mBoundingBox;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uchar, uchar>>                               mSwapAuxValues;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*> mBlockRules;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*> mBlockTagRules;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>>
                                                                                                  mGroupedBlockIds;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::LegacyStructureSettings::IndexedName>> mIndexedNames;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyStructureSettings(::LegacyStructureSettings const&);

    MCAPI LegacyStructureSettings(
        ::Mirror             mirror,
        ::Rotation           rotation,
        ::Block const*       ignoreBlock,
        ::BoundingBox const& boundingBox
    );

    MCAPI ::Block const& getSwappedBlock(::BlockPalette const& palette, ::Block const& oldBlock) const;

    MCAPI ::LegacyStructureSettings& operator=(::LegacyStructureSettings const&);

    MCAPI void updateBoundingBoxFromChunkPos();

    MCAPI ~LegacyStructureSettings();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& INTEGRITY_MAX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
