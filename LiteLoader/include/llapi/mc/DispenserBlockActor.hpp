/**
 * @file  DispenserBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DispenserBlockActor.
 *
 */
class DispenserBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPENSERBLOCKACTOR
public:
    class DispenserBlockActor& operator=(class DispenserBlockActor const &) = delete;
    DispenserBlockActor(class DispenserBlockActor const &) = delete;
    DispenserBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DISPENSERBLOCKACTOR
    /**
     * @hash   -1749172010
     * @symbol ?_getUpdatePacket@DispenserBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   669997068
     * @symbol ?_onUpdatePacket@DispenserBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1694380850
     * @symbol ?getContainer@DispenserBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1266658990
     * @symbol ?getContainer@DispenserBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -48975942
     * @symbol ?getContainerSize@DispenserBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -162908271
     * @symbol ?getItem@DispenserBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   1982812537
     * @symbol ?getMaxStackSize@DispenserBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1347228002
     * @symbol ?getName@DispenserBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -1427918170
     * @symbol ?getRandomSlot@DispenserBlockActor@@UEAAHXZ
     */
    MCVAPI int getRandomSlot();
    /**
     * @hash   -2054401948
     * @symbol ?load@DispenserBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -2100493558
     * @symbol ?onMove@DispenserBlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   2077773027
     * @symbol ?save@DispenserBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   160620422
     * @symbol ?serverInitItemStackIds@DispenserBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   316903732
     * @symbol ?setItem@DispenserBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -1998144371
     * @symbol ?startOpen@DispenserBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -1975015811
     * @symbol ?stopOpen@DispenserBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DispenserBlockActor();
#endif
    /**
     * @hash   977618897
     * @symbol ??0DispenserBlockActor@@QEAA@VBlockPos@@W4BlockActorType@@@Z
     */
    MCAPI DispenserBlockActor(class BlockPos, enum class BlockActorType);
    /**
     * @hash   -1824854614
     * @symbol ??0DispenserBlockActor@@QEAA@VBlockPos@@@Z
     */
    MCAPI DispenserBlockActor(class BlockPos);

};