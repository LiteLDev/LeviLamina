/**
 * @file  SculkShriekerBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkShriekerBlockActor.
 *
 */
class SculkShriekerBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCKACTOR
public:
    class SculkShriekerBlockActor& operator=(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SculkShriekerBlockActor();
    /**
     * @hash   39568738
     * @vftbl  1
     * @symbol ?load@SculkShriekerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -138663343
     * @vftbl  2
     * @symbol ?save@SculkShriekerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1106635243
     * @vftbl  7
     * @symbol ?tick@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   1137714823
     * @vftbl  13
     * @symbol ?onRemoved@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
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
     * @hash   -436625234
     * @symbol ??0SculkShriekerBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SculkShriekerBlockActor(class BlockPos const &);
    /**
     * @hash   -2022966817
     * @symbol ?tryRespond@SculkShriekerBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void tryRespond(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1432466513
     * @symbol ?tryShriek@SculkShriekerBlockActor@@QEAA_NAEAVBlockSource@@VBlockPos@@AEAVPlayer@@@Z
     */
    MCAPI bool tryShriek(class BlockSource &, class BlockPos, class Player &);
    /**
     * @hash   -1684247579
     * @symbol ?tryGet@SculkShriekerBlockActor@@SAPEAV1@AEAVBlockSource@@VBlockPos@@@Z
     */
    MCAPI static class SculkShriekerBlockActor * tryGet(class BlockSource &, class BlockPos);
    /**
     * @hash   -354412969
     * @symbol ?tryGetPlayerInHierarchy@SculkShriekerBlockActor@@SAPEAVPlayer@@PEAVActor@@@Z
     */
    MCAPI static class Player * tryGetPlayerInHierarchy(class Actor *);

};