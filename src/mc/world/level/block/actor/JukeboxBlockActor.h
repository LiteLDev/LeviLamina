#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class Level;
class SaveContext;
// clang-format on

class JukeboxBlockActor : public ::RandomizableBlockActorContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mRecord;
    ::ll::TypedStorage<4, 4, int>           mCount;
    ::ll::TypedStorage<1, 1, bool>          mRecordingFinished;
    ::ll::TypedStorage<4, 4, int>           mTicksPlaying;
    ::ll::TypedStorage<1, 1, bool>          mPostBlockChangeGameEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    JukeboxBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 32
    virtual bool canPushInItem(int, int, ::ItemStack const& item) const /*override*/;

    // vIndex: 33
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int) const /*override*/;

    // vIndex: 12
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Actor&) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Actor& actor) /*override*/;

    // vIndex: 32
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 31
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int containerSlot,
        int,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 42
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 43
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~JukeboxBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JukeboxBlockActor(::BlockPos const& pos);

    MCAPI void _onChanged(::BlockSource& region, ::SharedTypes::Legacy::LevelSoundEvent sound);

    MCAPI void _spawnMusicParticles(::Level& level, float recordDuration);

    MCAPI void setRecord(::ItemStack const& record, bool startPlaying);

    MCAPI void startPlayingRecord(::BlockSource& region);

    MCAPI void stopPlayingRecord(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $tick(::BlockSource& region);

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCAPI bool $canPushInItem(int, int, ::ItemStack const& item) const;

    MCAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI ::ItemStack const& $getItem(int) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD void $startOpen(::Actor&);

    MCFOLD void $stopOpen(::Actor& actor);

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void
    $serverInitItemStackIds(int containerSlot, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
