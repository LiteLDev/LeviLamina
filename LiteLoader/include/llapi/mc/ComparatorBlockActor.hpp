/**
 * @file  ComparatorBlockActor.hpp
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
 * @brief MC class ComparatorBlockActor.
 *
 */
class ComparatorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORBLOCKACTOR
public:
    class ComparatorBlockActor& operator=(class ComparatorBlockActor const &) = delete;
    ComparatorBlockActor(class ComparatorBlockActor const &) = delete;
    ComparatorBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ComparatorBlockActor();
    /**
     * @hash   77993621
     * @vftbl  1
     * @symbol ?load@ComparatorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -266097948
     * @vftbl  2
     * @symbol ?save@ComparatorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1759847246
     * @vftbl  7
     * @symbol ?tick@ComparatorBlockActor@@UEAAXAEAVBlockSource@@@Z
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
     * @hash   -2027245187
     * @vftbl  38
     * @symbol ?getOutputSignal@ComparatorBlockActor@@UEAAHXZ
     */
    virtual int getOutputSignal();
    /**
     * @hash   1545326091
     * @vftbl  39
     * @symbol ?setOutputSignal@ComparatorBlockActor@@UEAAXH@Z
     */
    virtual void setOutputSignal(int);
    /**
     * @hash   -1674503007
     * @symbol ??0ComparatorBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI ComparatorBlockActor(class BlockPos const &);

};