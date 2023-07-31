#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BegGoal {

public:
    // prevent constructor by default
    BegGoal& operator=(BegGoal const&) = delete;
    BegGoal(BegGoal const&)            = delete;
    BegGoal()                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@BegGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BegGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@BegGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@BegGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@BegGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@BegGoal\@\@EEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol
     * ??0BegGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@MHH\@Z
     */
    MCAPI BegGoal(class Mob&, std::vector<class ItemDescriptor> const&, float, int, int);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_playerHoldingInteresting\@BegGoal\@\@AEAA_NPEAVPlayer\@\@\@Z
     */
    MCAPI bool _playerHoldingInteresting(class Player*);
    // NOLINTEND
};
