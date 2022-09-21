/**
 * @file  MC/BellBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BellBlockActor.
 *
 */
class BellBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BELLBLOCKACTOR
public:
    class BellBlockActor& operator=(class BellBlockActor const &) = delete;
    BellBlockActor(class BellBlockActor const &) = delete;
    BellBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BellBlockActor();
    /**
     * @hash   2039783122
     * @vftbl  1
     * @symbol ?load@BellBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   828108577
     * @vftbl  2
     * @symbol ?save@BellBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   412729163
     * @vftbl  7
     * @symbol ?tick@BellBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
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
     * @hash   1102227332
     * @vftbl  35
     * @symbol ?_getUpdatePacket@BellBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -43227970
     * @vftbl  36
     * @symbol ?_onUpdatePacket@BellBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   144180542
     * @symbol ??0BellBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI BellBlockActor(class BlockPos const &);
    /**
     * @hash   -1978898353
     * @symbol ?ejectItem@BellBlockActor@@QEBAXAEBVBlockPos@@AEAVActor@@@Z
     */
    MCAPI void ejectItem(class BlockPos const &, class Actor &) const;
    /**
     * @hash   721505290
     * @symbol ?isRinging@BellBlockActor@@QEBA_NXZ
     */
    MCAPI bool isRinging() const;
    /**
     * @hash   1468360483
     * @symbol ?ring@BellBlockActor@@QEAA_NW4Type@Direction@@AEAVBlockSource@@PEAVActor@@_N@Z
     */
    MCAPI bool ring(enum Direction::Type, class BlockSource &, class Actor *, bool);

};