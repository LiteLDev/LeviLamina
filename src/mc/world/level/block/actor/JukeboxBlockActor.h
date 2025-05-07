#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class Level;
class Player;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int, int, ::ItemStack const& item) const /*override*/;

    // vIndex: 30
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player&) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 34
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 33
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 9
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int containerSlot,
        int,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~JukeboxBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JukeboxBlockActor(::BlockPos const& pos);

    MCNAPI void _onChanged(::BlockSource& region, ::SharedTypes::Legacy::LevelSoundEvent sound);

    MCNAPI void _spawnMusicParticles(::Level& level, float recordDuration);

    MCNAPI void setRecord(::ItemStack const& record, bool startPlaying);

    MCNAPI void startPlayingRecord(::BlockSource& region);

    MCNAPI void stopPlayingRecord(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const& item) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $startOpen(::Player&);

    MCNAPI void $stopOpen(::Player& player);

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void
    $serverInitItemStackIds(int containerSlot, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
