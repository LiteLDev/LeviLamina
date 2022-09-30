/**
 * @file  ItemFrameBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemFrameBlockActor.
 *
 */
class ItemFrameBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMFRAMEBLOCKACTOR
public:
    class ItemFrameBlockActor& operator=(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemFrameBlockActor();
    /**
     * @hash   1940051801
     * @vftbl  1
     * @symbol ?load@ItemFrameBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1984320216
     * @vftbl  2
     * @symbol ?save@ItemFrameBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -1274184350
     * @vftbl  7
     * @symbol ?tick@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -478924710
     * @vftbl  8
     * @symbol ?onChanged@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   -1270704130
     * @vftbl  13
     * @symbol ?onRemoved@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   1484392750
     * @vftbl  17
     * @symbol ?getShadowRadius@ItemFrameBlockActor@@UEBAMAEAVBlockSource@@@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   -1077775109
     * @vftbl  35
     * @symbol ?_getUpdatePacket@ItemFrameBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   70498791
     * @vftbl  36
     * @symbol ?_onUpdatePacket@ItemFrameBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   464532785
     * @symbol ??0ItemFrameBlockActor@@QEAA@VBlockPos@@W4BlockActorType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos, enum class BlockActorType, std::string);
    /**
     * @hash   -1451420811
     * @symbol ??0ItemFrameBlockActor@@QEAA@VBlockPos@@@Z
     */
    MCAPI ItemFrameBlockActor(class BlockPos);
    /**
     * @hash   107463459
     * @symbol ?actuallyDropItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@_N@Z
     */
    MCAPI void actuallyDropItem(class BlockSource &, bool);
    /**
     * @hash   183672851
     * @symbol ?dropFramedItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@_N@Z
     */
    MCAPI void dropFramedItem(class BlockSource &, bool);
    /**
     * @hash   -191197240
     * @symbol ?getFramedItem@ItemFrameBlockActor@@QEAAAEAVItemInstance@@XZ
     */
    MCAPI class ItemInstance & getFramedItem();
    /**
     * @hash   -1557906912
     * @symbol ?getRotation@ItemFrameBlockActor@@QEAAMXZ
     */
    MCAPI float getRotation();
    /**
     * @hash   -68456067
     * @symbol ?rotateFramedItem@ItemFrameBlockActor@@QEAAXXZ
     */
    MCAPI void rotateFramedItem();
    /**
     * @hash   -1286270563
     * @symbol ?setItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@AEBVItemInstance@@@Z
     */
    MCAPI void setItem(class BlockSource &, class ItemInstance const &);
    /**
     * @hash   1234768369
     * @symbol ?updateNameTag@ItemFrameBlockActor@@QEAAXXZ
     */
    MCAPI void updateNameTag();
    /**
     * @hash   95529579
     * @symbol ?ROTATION_DEGREES@ItemFrameBlockActor@@2MB
     */
    MCAPI static float const ROTATION_DEGREES;

//private:
    /**
     * @hash   375216819
     * @symbol ?_checkMapRemoval@ItemFrameBlockActor@@AEAAXAEAVBlockSource@@AEAVItemInstance@@@Z
     */
    MCAPI void _checkMapRemoval(class BlockSource &, class ItemInstance &);
    /**
     * @hash   -1653672218
     * @symbol ?_updateBit@ItemFrameBlockActor@@AEAAXAEAVBlockSource@@AEBV?$ItemStateVariant@_N@@AEBVHashedString@@@Z
     */
    MCAPI void _updateBit(class BlockSource &, class ItemStateVariant<bool> const &, class HashedString const &);

private:

};