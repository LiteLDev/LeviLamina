/**
 * @file  MC/BarterGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BarterGoal.
 *
 */
class BarterGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARTERGOAL
public:
    class BarterGoal& operator=(class BarterGoal const &) = delete;
    BarterGoal(class BarterGoal const &) = delete;
    BarterGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BarterGoal();
    /**
     * @hash   -2021184337
     * @vftbl  1
     * @symbol ?canUse@BarterGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1554987651
     * @vftbl  2
     * @symbol ?canContinueToUse@BarterGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   411673731
     * @vftbl  6
     * @symbol ?tick@BarterGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1315560065
     * @vftbl  7
     * @symbol ?appendDebugInfo@BarterGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -865554596
     * @symbol ??0BarterGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI BarterGoal(class Mob &);

//private:
    /**
     * @hash   -441387913
     * @symbol ?_getThrowVector@BarterGoal@@AEAA?AVVec3@@XZ
     */
    MCAPI class Vec3 _getThrowVector();

private:

};