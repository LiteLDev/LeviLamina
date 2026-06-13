#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CommandArea;
class CompoundTag;
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
    StructureAnimationData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureAnimationData(::StructureAnimationData&&);

    MCAPI StructureAnimationData(
        ::std::unique_ptr<::CommandArea> cmdArea,
        uint64                           tickQueued,
        ::std::string const&             structureName,
        ::StructureSettings const&       structureSettings,
        uchar                            structureVersion,
        ::BlockPos const&                placementPos
    );

    MCAPI bool allBlocksPlaced() const;

    MCAPI uint getBlocksExpectedToPlace(uint64 currentTick) const;

    MCFOLD uint getBlocksPlaced() const;

    MCAPI ::BlockSource& getDimensionBlockSource() const;

    MCFOLD ::BlockPos const& getPosition() const;

    MCFOLD uint getQueueID() const;

    MCFOLD ::std::string const& getStructureName() const;

    MCFOLD ::StructureSettings const& getStructureSettings() const;

    MCFOLD uchar getStructureVersion() const;

    MCFOLD ::DimensionType const& getTargetDimension() const;

    MCFOLD uint getTotalBlocks() const;

    MCAPI ::CompoundTag& serialize(::CompoundTag& tag);

    MCFOLD void setBlocksPlaced(uint blocksPlaced);

    MCAPI void setCmdArea(::std::unique_ptr<::CommandArea> cmdArea);

    MCAPI void setQueueID(uint queueID);

    MCAPI void setTargetDimension(::DimensionType const& targetDimension);

    MCAPI ~StructureAnimationData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::StructureAnimationData load(::std::string const& key, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureAnimationData&&);

    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND
};
