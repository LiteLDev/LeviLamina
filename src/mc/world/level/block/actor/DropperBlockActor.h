#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/DispenserBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class Container;
class ItemStack;
class Vec3;
// clang-format on

class DropperBlockActor : public ::DispenserBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 27
    virtual ::std::string getName() const /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~DropperBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tryPushToComposter(::BlockSource& region, int facingDirection);

    MCAPI bool pushOutItems(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _tryMoveInItemsAndDepleteStack(::Container& container, ::ItemStack& item, int stackSizeLimit, int slot, int face);

    MCAPI static ::Container* getContainerAt(::BlockSource& region, ::Vec3 const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
