#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MakeLoveGoal {

public:
    // prevent constructor by default
    MakeLoveGoal& operator=(MakeLoveGoal const&) = delete;
    MakeLoveGoal(MakeLoveGoal const&)            = delete;
    MakeLoveGoal()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MakeLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MakeLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MakeLoveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0MakeLoveGoal\@\@QEAA\@AEAVVillagerBase\@\@\@Z
     */
    MCAPI MakeLoveGoal(class VillagerBase&); // NOLINT

    // private:
    /**
     * @symbol ?_breed\@MakeLoveGoal\@\@AEBAXAEAVVillagerBase\@\@\@Z
     */
    MCAPI void _breed(class VillagerBase&) const; // NOLINT
    /**
     * @symbol ?_findMate\@MakeLoveGoal\@\@AEBAPEAVVillagerBase\@\@XZ
     */
    MCAPI class VillagerBase* _findMate() const; // NOLINT

private:
};
