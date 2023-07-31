#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MakeLoveGoal {

public:
    // prevent constructor by default
    MakeLoveGoal& operator=(MakeLoveGoal const&) = delete;
    MakeLoveGoal(MakeLoveGoal const&)            = delete;
    MakeLoveGoal()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MakeLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MakeLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MakeLoveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0MakeLoveGoal\@\@QEAA\@AEAVVillagerBase\@\@\@Z
     */
    MCAPI MakeLoveGoal(class VillagerBase&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_breed\@MakeLoveGoal\@\@AEBAXAEAVVillagerBase\@\@\@Z
     */
    MCAPI void _breed(class VillagerBase&) const;
    /**
     * @symbol ?_findMate\@MakeLoveGoal\@\@AEBAPEAVVillagerBase\@\@XZ
     */
    MCAPI class VillagerBase* _findMate() const;
    // NOLINTEND
};
