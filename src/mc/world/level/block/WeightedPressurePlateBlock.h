#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BasePressurePlateBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
// clang-format on

class WeightedPressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> mMaxWeight;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getTickDelay() const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual int getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual int getSignalForData(int data) const /*override*/;

    virtual int getRedstoneSignal(int signal) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual ~WeightedPressurePlateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getTickDelay() const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI int $getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD int $getSignalForData(int data) const;

    MCFOLD int $getRedstoneSignal(int signal) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
