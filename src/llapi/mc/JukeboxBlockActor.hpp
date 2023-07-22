/**
 * @file  JukeboxBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JukeboxBlockActor.
 *
 */
class JukeboxBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUKEBOXBLOCKACTOR
public:
    class JukeboxBlockActor& operator=(class JukeboxBlockActor const &) = delete;
    JukeboxBlockActor(class JukeboxBlockActor const &) = delete;
    JukeboxBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUKEBOXBLOCKACTOR
    /**
     * @symbol  ?_getUpdatePacket\@JukeboxBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol  ?_onUpdatePacket\@JukeboxBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ?canPullOutItem\@JukeboxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @symbol  ?canPushInItem\@JukeboxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @symbol  ?getContainer\@JukeboxBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol  ?getContainer\@JukeboxBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol  ?getContainerSize\@JukeboxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol  ?getItem\@JukeboxBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol  ?getMaxStackSize\@JukeboxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol  ?load\@JukeboxBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?onChanged\@JukeboxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @symbol  ?save\@JukeboxBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?serverInitItemStackIds\@JukeboxBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setItem\@JukeboxBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol  ?startOpen\@JukeboxBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol  ?stopOpen\@JukeboxBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol  ?tick\@JukeboxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol  ??0JukeboxBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI JukeboxBlockActor(class BlockPos const &);
    /**
     * @symbol  ?getRecord\@JukeboxBlockActor\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getRecord() const;
    /**
     * @symbol  ?isRecordPlaying\@JukeboxBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRecordPlaying() const;
    /**
     * @symbol  ?setRecord\@JukeboxBlockActor\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setRecord(class ItemStack const &);
    /**
     * @symbol  ?stopPlayingRecord\@JukeboxBlockActor\@\@QEBAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void stopPlayingRecord(class BlockSource &) const;

//private:
    /**
     * @symbol  ?_onChanged\@JukeboxBlockActor\@\@AEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@\@Z
     */
    MCAPI void _onChanged(class BlockSource &, enum class LevelSoundEvent);
    /**
     * @symbol  ?_spawnMusicParticles\@JukeboxBlockActor\@\@AEAAXAEAVLevel\@\@M\@Z
     */
    MCAPI void _spawnMusicParticles(class Level &, float);

private:

};