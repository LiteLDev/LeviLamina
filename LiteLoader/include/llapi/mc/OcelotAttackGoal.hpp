/**
 * @file  OcelotAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OcelotAttackGoal.
 *
 */
class OcelotAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTATTACKGOAL
public:
    class OcelotAttackGoal& operator=(class OcelotAttackGoal const &) = delete;
    OcelotAttackGoal(class OcelotAttackGoal const &) = delete;
    OcelotAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OcelotAttackGoal();
    /**
     * @hash   605163557
     * @vftbl  1
     * @symbol  ?canUse\@OcelotAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1048992723
     * @vftbl  2
     * @symbol  ?canContinueToUse\@OcelotAttackGoal\@\@UEAA_NXZ
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
     * @hash   1029103086
     * @vftbl  5
     * @symbol  ?stop\@OcelotAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -2045114935
     * @vftbl  6
     * @symbol  ?tick\@OcelotAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1014614709
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@OcelotAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1470548322
     * @symbol  ??0OcelotAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI OcelotAttackGoal(class Mob &);

};