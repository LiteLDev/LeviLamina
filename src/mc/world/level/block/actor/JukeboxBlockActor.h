#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JukeboxBlockActor {

public:
    // prevent constructor by default
    JukeboxBlockActor& operator=(JukeboxBlockActor const&) = delete;
    JukeboxBlockActor(JukeboxBlockActor const&)            = delete;
    JukeboxBlockActor()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUKEBOXBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@JukeboxBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@JukeboxBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?canPullOutItem\@JukeboxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?canPushInItem\@JukeboxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?getContainer\@JukeboxBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@JukeboxBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@JukeboxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@JukeboxBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@JukeboxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol ?load\@JukeboxBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onChanged\@JukeboxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&); // NOLINT
    /**
     * @symbol ?save\@JukeboxBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?serverInitItemStackIds\@JukeboxBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@JukeboxBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@JukeboxBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@JukeboxBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@JukeboxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
#endif
    /**
     * @symbol ??0JukeboxBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI JukeboxBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getRecord\@JukeboxBlockActor\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getRecord() const; // NOLINT
    /**
     * @symbol ?isRecordPlaying\@JukeboxBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRecordPlaying() const; // NOLINT
    /**
     * @symbol ?setRecord\@JukeboxBlockActor\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setRecord(class ItemStack const&); // NOLINT
    /**
     * @symbol ?stopPlayingRecord\@JukeboxBlockActor\@\@QEBAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void stopPlayingRecord(class BlockSource&) const; // NOLINT

    // private:
    /**
     * @symbol ?_spawnMusicParticles\@JukeboxBlockActor\@\@AEAAXAEAVLevel\@\@M\@Z
     */
    MCAPI void _spawnMusicParticles(class Level&, float); // NOLINT

private:
};
