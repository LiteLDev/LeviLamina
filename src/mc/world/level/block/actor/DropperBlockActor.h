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
    // prevent constructor by default
    DropperBlockActor& operator=(DropperBlockActor const&);
    DropperBlockActor(DropperBlockActor const&);
    DropperBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 26
    virtual ::std::string getName() const /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~DropperBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool pushOutItems(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    addItemsToContainerAndDepleteStack(::Container& container, ::ItemStack& item, int stackSizeLimit, int face);

    MCAPI static ::Container* getContainerAt(::BlockSource& region, ::Vec3 const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
