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
    virtual ::std::string getName() const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool pushOutItems(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static bool
    _tryMoveInItemsAndDepleteStack(::Container& container, ::ItemStack& item, int stackSizeLimit, int slot, int face);
#endif

#ifdef LL_PLAT_C
    MCAPI static bool
    _tryMoveInItemsAndDepleteStack(::Container& container, ::ItemStack& item, int stackSizeLimit, int slot, int face);
#endif

    MCAPI static ::Container* getContainerAt(::BlockSource& region, ::Vec3 const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

#ifdef LL_PLAT_S
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#else // LL_PLAT_C
    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
    // NOLINTEND
};
