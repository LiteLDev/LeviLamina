#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreedGoal {

public:
    // prevent constructor by default
    BreedGoal& operator=(BreedGoal const&) = delete;
    BreedGoal(BreedGoal const&)            = delete;
    BreedGoal()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@BreedGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BreedGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?stop\@BreedGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@BreedGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@BreedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0BreedGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI BreedGoal(class Mob&, float);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_isCloseEnoughToBreed\@BreedGoal\@\@AEBA_NVVec3\@\@VVec2\@\@01\@Z
     */
    MCAPI bool _isCloseEnoughToBreed(class Vec3, class Vec2, class Vec3, class Vec2) const;
    /**
     * @symbol ?_moveToFreePartner\@BreedGoal\@\@AEBAPEAVMob\@\@XZ
     */
    MCAPI class Mob* _moveToFreePartner() const;
    // NOLINTEND
};
