/**
 * @file  BreedGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreedGoal.
 *
 */
class BreedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDGOAL
public:
    class BreedGoal& operator=(class BreedGoal const &) = delete;
    BreedGoal(class BreedGoal const &) = delete;
    BreedGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BreedGoal();
    /**
     * @hash   732199977
     * @vftbl  1
     * @symbol  ?canUse\@BreedGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   503611815
     * @vftbl  2
     * @symbol  ?canContinueToUse\@BreedGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -1698402990
     * @vftbl  5
     * @symbol  ?stop\@BreedGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1270861533
     * @vftbl  6
     * @symbol  ?tick\@BreedGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1121708519
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@BreedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1917906811
     * @symbol  ??0BreedGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI BreedGoal(class Mob &, float);

//private:
    /**
     * @hash   871979802
     * @symbol  ?_isCloseEnoughToBreed\@BreedGoal\@\@AEBA_NVVec3\@\@VVec2\@\@01\@Z
     */
    MCAPI bool _isCloseEnoughToBreed(class Vec3, class Vec2, class Vec3, class Vec2) const;
    /**
     * @hash   1702024579
     * @symbol  ?_moveToFreePartner\@BreedGoal\@\@AEBAPEAVMob\@\@XZ
     */
    MCAPI class Mob * _moveToFreePartner() const;

private:

};