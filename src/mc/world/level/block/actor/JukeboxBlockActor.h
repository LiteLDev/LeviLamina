#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

class JukeboxBlockActor : public ::RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    JukeboxBlockActor& operator=(JukeboxBlockActor const&);
    JukeboxBlockActor(JukeboxBlockActor const&);
    JukeboxBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@JukeboxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ?_onUpdatePacket@JukeboxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?canPullOutItem@JukeboxBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    // symbol: ?canPushInItem@JukeboxBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int, int, class ItemStack const& itemStack) const;

    // symbol: ?getContainer@JukeboxBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@JukeboxBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@JukeboxBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@JukeboxBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@JukeboxBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?load@JukeboxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onChanged@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource& region);

    // symbol: ?save@JukeboxBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@JukeboxBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@JukeboxBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ?stopOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ?tick@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ??0JukeboxBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit JukeboxBlockActor(class BlockPos const& pos);

    // symbol: ?getRecord@JukeboxBlockActor@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getRecord() const;

    // symbol: ?isRecordPlaying@JukeboxBlockActor@@QEBA_NXZ
    MCAPI bool isRecordPlaying() const;

    // symbol: ?setRecord@JukeboxBlockActor@@QEAAXAEBVItemStack@@@Z
    MCAPI void setRecord(class ItemStack const& record);

    // symbol: ?stopPlayingRecord@JukeboxBlockActor@@QEBAXAEAVBlockSource@@@Z
    MCAPI void stopPlayingRecord(class BlockSource& region) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onChanged@JukeboxBlockActor@@AEAAXAEAVBlockSource@@W4LevelSoundEvent@Legacy@Puv@@@Z
    MCAPI void _onChanged(class BlockSource&, ::Puv::Legacy::LevelSoundEvent);

    // symbol: ?_spawnMusicParticles@JukeboxBlockActor@@AEAAXAEAVLevel@@M@Z
    MCAPI void _spawnMusicParticles(class Level& level, float recordDuration);

    // NOLINTEND
};
