#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BegGoal {

public:
    // prevent constructor by default
    BegGoal& operator=(BegGoal const&) = delete;
    BegGoal(BegGoal const&)            = delete;
    BegGoal()                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@BegGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BegGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@BegGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@BegGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@BegGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@BegGoal\@\@EEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol
     * ??0BegGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@MHH\@Z
     */
    MCAPI BegGoal(class Mob&, std::vector<class ItemDescriptor> const&, float, int, int); // NOLINT

    // private:
    /**
     * @symbol ?_playerHoldingInteresting\@BegGoal\@\@AEAA_NPEAVPlayer\@\@\@Z
     */
    MCAPI bool _playerHoldingInteresting(class Player*); // NOLINT

private:
};
