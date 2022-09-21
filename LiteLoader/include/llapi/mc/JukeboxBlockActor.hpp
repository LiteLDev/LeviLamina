/**
 * @file  MC/JukeboxBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -870831657
     * @symbol ?_getUpdatePacket@JukeboxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   168065659
     * @symbol ?_onUpdatePacket@JukeboxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -150493765
     * @symbol ?canPullOutItem@JukeboxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   -31255871
     * @symbol ?canPushInItem@JukeboxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   -22999071
     * @symbol ?getContainer@JukeboxBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -450720931
     * @symbol ?getContainer@JukeboxBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   164216489
     * @symbol ?getContainerSize@JukeboxBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   1914262178
     * @symbol ?getItem@JukeboxBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   217894072
     * @symbol ?getMaxStackSize@JukeboxBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1497967963
     * @symbol ?load@JukeboxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1015865530
     * @symbol ?onChanged@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   1287838580
     * @symbol ?save@JukeboxBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -1445781369
     * @symbol ?serverInitItemStackIds@JukeboxBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -305993149
     * @symbol ?setItem@JukeboxBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   575825614
     * @symbol ?startOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   419313518
     * @symbol ?stopOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   -65054306
     * @symbol ?tick@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   784014049
     * @symbol ??0JukeboxBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI JukeboxBlockActor(class BlockPos const &);
    /**
     * @hash   1768000278
     * @symbol ?getRecord@JukeboxBlockActor@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getRecord() const;
    /**
     * @hash   -1702969150
     * @symbol ?isRecordPlaying@JukeboxBlockActor@@QEBA_NXZ
     */
    MCAPI bool isRecordPlaying() const;
    /**
     * @hash   631761472
     * @symbol ?setRecord@JukeboxBlockActor@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void setRecord(class ItemStack const &);
    /**
     * @hash   -410295046
     * @symbol ?stopPlayingRecord@JukeboxBlockActor@@QEBAXAEAVBlockSource@@@Z
     */
    MCAPI void stopPlayingRecord(class BlockSource &) const;

//private:
    /**
     * @hash   766912571
     * @symbol ?_onChanged@JukeboxBlockActor@@AEAAXAEAVBlockSource@@W4LevelSoundEvent@@@Z
     */
    MCAPI void _onChanged(class BlockSource &, enum LevelSoundEvent);
    /**
     * @hash   1297258972
     * @symbol ?_spawnMusicParticles@JukeboxBlockActor@@AEAAXAEAVLevel@@M@Z
     */
    MCAPI void _spawnMusicParticles(class Level &, float);

private:

};