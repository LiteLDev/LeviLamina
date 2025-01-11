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
    ::ll::TypedStorage<4, 4, int const> mMaxWeight;
    // NOLINTEND

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
    virtual ~WeightedPressurePlateBlock() /*override*/ = default;
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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getTickDelay() const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI int $getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD int $getSignalForData(int data) const;

    MCFOLD int $getRedstoneSignal(int signal) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
