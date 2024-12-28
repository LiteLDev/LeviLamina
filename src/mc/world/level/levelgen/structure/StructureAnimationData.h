#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CommandArea;
class CompoundTag;
class Dimension;
class StructureSettings;
// clang-format on

class StructureAnimationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkf8f03e;
    ::ll::UntypedStorage<8, 32>  mUnk69416d;
    ::ll::UntypedStorage<8, 104> mUnked6527;
    ::ll::UntypedStorage<4, 4>   mUnk74d064;
    ::ll::UntypedStorage<4, 4>   mUnk9e7870;
    ::ll::UntypedStorage<1, 1>   mUnkb1aa1a;
    ::ll::UntypedStorage<8, 8>   mUnkf3f764;
    ::ll::UntypedStorage<4, 12>  mUnkb908e5;
    ::ll::UntypedStorage<4, 4>   mUnk4ff306;
    ::ll::UntypedStorage<4, 4>   mUnk50f161;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&);
    StructureAnimationData(StructureAnimationData const&);
    StructureAnimationData();

public:
    // member functions
    // NOLINTBEGIN
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

    MCAPI uint getBlocksPlaced() const;

    MCAPI ::BlockSource& getDimensionBlockSource() const;

    MCAPI ::BlockPos const& getPosition() const;

    MCAPI uint getQueueID() const;

    MCAPI ::std::string const& getStructureName() const;

    MCAPI ::StructureSettings const& getStructureSettings() const;

    MCAPI uchar getStructureVersion() const;

    MCAPI ::DimensionType const& getTargetDimension() const;

    MCAPI uint getTotalBlocks() const;

    MCAPI ::CompoundTag& serialize(::CompoundTag& tag);

    MCAPI void setBlocksPlaced(uint blocksPlaced);

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
