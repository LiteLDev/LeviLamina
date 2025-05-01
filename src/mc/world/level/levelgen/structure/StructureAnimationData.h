#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class CommandArea;
class CompoundTag;
class Dimension;
// clang-format on

class StructureAnimationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                           mTickQueued;
    ::ll::TypedStorage<8, 32, ::std::string>                   mStructureName;
    ::ll::TypedStorage<8, 104, ::StructureSettings>            mStructureSettings;
    ::ll::TypedStorage<4, 4, uint>                             mBlocksPlaced;
    ::ll::TypedStorage<4, 4, uint>                             mTotalBlocks;
    ::ll::TypedStorage<1, 1, uchar>                            mInitialStructureVersion;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandArea>> mCmdArea;
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mPlacementPos;
    ::ll::TypedStorage<4, 4, uint>                             mQueueID;
    ::ll::TypedStorage<4, 4, ::DimensionType>                  mTargetDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&);
    StructureAnimationData(StructureAnimationData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureAnimationData(::StructureAnimationData&&);

    MCNAPI StructureAnimationData(
        ::std::unique_ptr<::CommandArea> cmdArea,
        uint64                           tickQueued,
        ::std::string const&             structureName,
        ::StructureSettings const&       structureSettings,
        uchar                            structureVersion,
        ::BlockPos const&                placementPos
    );

    MCNAPI ::CompoundTag& serialize(::CompoundTag& tag);

    MCNAPI void setCmdArea(::std::unique_ptr<::CommandArea> cmdArea);

    MCNAPI ~StructureAnimationData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::StructureAnimationData load(::std::string const& key, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructureAnimationData&&);

    MCNAPI void* $ctor(
        ::std::unique_ptr<::CommandArea> cmdArea,
        uint64                           tickQueued,
        ::std::string const&             structureName,
        ::StructureSettings const&       structureSettings,
        uchar                            structureVersion,
        ::BlockPos const&                placementPos
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
