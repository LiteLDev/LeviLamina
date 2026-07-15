#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/DispenserBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


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
