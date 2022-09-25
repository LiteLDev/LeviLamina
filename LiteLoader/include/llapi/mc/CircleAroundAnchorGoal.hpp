/**
 * @file  CircleAroundAnchorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CircleAroundAnchorGoal.
 *
 */
class CircleAroundAnchorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCLEAROUNDANCHORGOAL
public:
    class CircleAroundAnchorGoal& operator=(class CircleAroundAnchorGoal const &) = delete;
    CircleAroundAnchorGoal(class CircleAroundAnchorGoal const &) = delete;
    CircleAroundAnchorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CircleAroundAnchorGoal();
    /**
     * @hash   1097854939
     * @vftbl  1
     * @symbol ?canUse@CircleAroundAnchorGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -129703868
     * @vftbl  4
     * @symbol ?start@CircleAroundAnchorGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1827338876
     * @vftbl  5
     * @symbol ?stop@CircleAroundAnchorGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1739974991
     * @vftbl  6
     * @symbol ?tick@CircleAroundAnchorGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   569399637
     * @vftbl  7
     * @symbol ?appendDebugInfo@CircleAroundAnchorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -652123048
     * @symbol ??0CircleAroundAnchorGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI CircleAroundAnchorGoal(class Mob &);

//private:
    /**
     * @hash   1670273647
     * @symbol ?_calculateHeightOffset@CircleAroundAnchorGoal@@AEBAMXZ
     */
    MCAPI float _calculateHeightOffset() const;
    /**
     * @hash   -1055562619
     * @symbol ?_selectNext@CircleAroundAnchorGoal@@AEAAXXZ
     */
    MCAPI void _selectNext();
    /**
     * @hash   -1722370291
     * @symbol ?_setAnchorAboveTarget@CircleAroundAnchorGoal@@AEAAXXZ
     */
    MCAPI void _setAnchorAboveTarget();

private:

};