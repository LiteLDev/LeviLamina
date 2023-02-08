/**
 * @file  DispenserBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1034141882
     * @symbol  ?_getUpdatePacket\@DispenserBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1385027196
     * @symbol  ?_onUpdatePacket\@DispenserBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1730181838
     * @symbol  ?getContainer\@DispenserBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   2137063598
     * @symbol  ?getContainer\@DispenserBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -964878134
     * @symbol  ?getContainerSize\@DispenserBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   538283457
     * @symbol  ?getItem\@DispenserBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   1066695081
     * @symbol  ?getMaxStackSize\@DispenserBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -646036274
     * @symbol  ?getName\@DispenserBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -726695690
     * @symbol  ?getRandomSlot\@DispenserBlockActor\@\@UEAAHXZ
     */
    MCVAPI int getRandomSlot();
    /**
     * @hash   -1353056460
     * @symbol  ?load\@DispenserBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1230012070
     * @symbol  ?onMove\@DispenserBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -1515787277
     * @symbol  ?save\@DispenserBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   862027414
     * @symbol  ?serverInitItemStackIds\@DispenserBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1018326100
     * @symbol  ?setItem\@DispenserBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -1296691251
     * @symbol  ?startOpen\@DispenserBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -1883128835
     * @symbol  ?stopOpen\@DispenserBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   612820136
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~DispenserBlockActor();
#endif
    /**
     * @hash   1678902881
     * @symbol  ??0DispenserBlockActor\@\@QEAA\@VBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI DispenserBlockActor(class BlockPos, enum class BlockActorType);
    /**
     * @hash   -1123462998
     * @symbol  ??0DispenserBlockActor\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI DispenserBlockActor(class BlockPos);

//protected:
    /**
     * @hash   1734680502
     * @symbol  ?initItems\@DispenserBlockActor\@\@IEAAXXZ
     */
    MCAPI void initItems();

protected:

};