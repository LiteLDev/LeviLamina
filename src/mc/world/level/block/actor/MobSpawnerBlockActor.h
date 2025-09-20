#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseMobSpawner;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
struct ActorDefinitionIdentifier;
// clang-format on

class MobSpawnerBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseMobSpawner>> mSpawner;
    // NOLINTEND

public:
    // prevent constructor by default
    MobSpawnerBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource&) /*override*/;

    // vIndex: 42
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 43
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~MobSpawnerBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobSpawnerBlockActor(::BlockPos const& pos);

    MCNAPI void setMob(::BlockSource& region, ::ActorDefinitionIdentifier const& identifier, ::Actor* usingActor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
