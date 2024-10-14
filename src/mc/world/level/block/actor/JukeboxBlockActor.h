#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

class JukeboxBlockActor : public ::RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    JukeboxBlockActor& operator=(JukeboxBlockActor const&);
    JukeboxBlockActor(JukeboxBlockActor const&);
    JukeboxBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    MCVAPI bool canPushInItem(int, int, class ItemStack const& item) const;

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onChanged(class BlockSource& region);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void
    serverInitItemStackIds(int containerSlot, int, std::function<void(int, class ItemStack const&)> onNetIdChanged);

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player&);

    MCVAPI void stopOpen(class Player&);

    MCVAPI void tick(class BlockSource& region);

    MCAPI explicit JukeboxBlockActor(class BlockPos const& pos);

    MCAPI class ItemStack const& getRecord() const;

    MCAPI bool isRecordPlaying() const;

    MCAPI void setRecord(class ItemStack const& record);

    MCAPI void stopPlayingRecord(class BlockSource& region) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onChanged(class BlockSource& region, ::Puv::Legacy::LevelSoundEvent sound);

    MCAPI void _spawnMusicParticles(class Level& level, float recordDuration);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI bool canPullOutItem$(int, int, class ItemStack const&) const;

    MCAPI bool canPushInItem$(int, int, class ItemStack const& item) const;

    MCAPI class Container* getContainer$();

    MCAPI class Container const* getContainer$() const;

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void
    serverInitItemStackIds$(int containerSlot, int, std::function<void(int, class ItemStack const&)> onNetIdChanged);

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player&);

    MCAPI void stopOpen$(class Player&);

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
