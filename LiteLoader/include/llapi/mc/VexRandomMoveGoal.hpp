/**
 * @file  VexRandomMoveGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VexRandomMoveGoal.
 *
 */
class VexRandomMoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEXRANDOMMOVEGOAL
public:
    class VexRandomMoveGoal& operator=(class VexRandomMoveGoal const &) = delete;
    VexRandomMoveGoal(class VexRandomMoveGoal const &) = delete;
    VexRandomMoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VexRandomMoveGoal();
    /**
     * @hash   -945386256
     * @vftbl  1
     * @symbol ?canUse@VexRandomMoveGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1107273854
     * @vftbl  2
     * @symbol ?canContinueToUse@VexRandomMoveGoal@@UEAA_NXZ
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
     * @hash   -171786300
     * @vftbl  6
     * @symbol ?tick@VexRandomMoveGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   967010368
     * @vftbl  7
     * @symbol ?appendDebugInfo@VexRandomMoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1843892429
     * @symbol ??0VexRandomMoveGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI VexRandomMoveGoal(class Mob &);

};