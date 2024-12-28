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
class ItemInstance;
class Material;
// clang-format on

class WeightedPressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka5d4c8;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedPressurePlateBlock& operator=(WeightedPressurePlateBlock const&);
    WeightedPressurePlateBlock(WeightedPressurePlateBlock const&);
    WeightedPressurePlateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 151
    virtual int getTickDelay() const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 152
    virtual int getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 153
    virtual int getSignalForData(int data) const /*override*/;

    // vIndex: 154
    virtual int getRedstoneSignal(int signal) const /*override*/;

    // vIndex: 0
    virtual ~WeightedPressurePlateBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeightedPressurePlateBlock(::std::string const& nameId, int id, ::Material const& material, int maxWeight);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_WEIGHT_HEAVY();

    MCAPI static int const& MAX_WEIGHT_LIGHT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material, int maxWeight);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getTickDelay() const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI int $getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getSignalForData(int data) const;

    MCAPI int $getRedstoneSignal(int signal) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
