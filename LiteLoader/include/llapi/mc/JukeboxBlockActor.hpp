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
     * @hash   -120206089
     * @symbol  ?_getUpdatePacket\@JukeboxBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   918737355
     * @symbol  ?_onUpdatePacket\@JukeboxBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -455099508
     * @symbol  ?canPullOutItem\@JukeboxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @hash   -2077218330
     * @symbol  ?canPushInItem\@JukeboxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @hash   847405537
     * @symbol  ?getContainer\@JukeboxBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   419683677
     * @symbol  ?getContainer\@JukeboxBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   270157129
     * @symbol  ?getContainerSize\@JukeboxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -2127139502
     * @symbol  ?getItem\@JukeboxBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   323834712
     * @symbol  ?getMaxStackSize\@JukeboxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -747357771
     * @symbol  ?load\@JukeboxBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -265224586
     * @symbol  ?onChanged\@JukeboxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   2038541028
     * @symbol  ?save\@JukeboxBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -695078921
     * @symbol  ?serverInitItemStackIds\@JukeboxBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   444724675
     * @symbol  ?setItem\@JukeboxBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   667712590
     * @symbol  ?startOpen\@JukeboxBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   511200494
     * @symbol  ?stopOpen\@JukeboxBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   685740398
     * @symbol  ?tick\@JukeboxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   1534624241
     * @symbol  ??0JukeboxBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI JukeboxBlockActor(class BlockPos const &);
    /**
     * @hash   -1776356826
     * @symbol  ?getRecord\@JukeboxBlockActor\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getRecord() const;
    /**
     * @hash   -952358958
     * @symbol  ?isRecordPlaying\@JukeboxBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRecordPlaying() const;
    /**
     * @hash   1382510048
     * @symbol  ?setRecord\@JukeboxBlockActor\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setRecord(class ItemStack const &);
    /**
     * @hash   340453530
     * @symbol  ?stopPlayingRecord\@JukeboxBlockActor\@\@QEBAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void stopPlayingRecord(class BlockSource &) const;

//private:
    /**
     * @hash   1517538139
     * @symbol  ?_onChanged\@JukeboxBlockActor\@\@AEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@\@Z
     */
    MCAPI void _onChanged(class BlockSource &, enum class LevelSoundEvent);
    /**
     * @hash   2047946044
     * @symbol  ?_spawnMusicParticles\@JukeboxBlockActor\@\@AEAAXAEAVLevel\@\@M\@Z
     */
    MCAPI void _spawnMusicParticles(class Level &, float);

private:

};