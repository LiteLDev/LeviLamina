#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class BellBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              mRinging;
    ::ll::TypedStorage<1, 1, ::Direction::Type> mMovementDirection;
    ::ll::TypedStorage<1, 1, bool>              mPowered;
    ::ll::TypedStorage<4, 4, int>               mAlarmCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    BellBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const /*override*/;

    virtual void load(::ILevel& tag, ::CompoundTag const&, ::DataLoadHelper&) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BellBlockActor(::BlockPos const& pos);

    MCAPI void ejectItem(::BlockPos const& pos, ::Actor& actor) const;

    MCFOLD bool isRinging() const;

    MCAPI bool ring(::Direction::Type direction, ::BlockSource& region, ::Actor* sourceActor, bool alarmNearbyDwellers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;

    MCAPI void $load(::ILevel& tag, ::CompoundTag const&, ::DataLoadHelper&);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
