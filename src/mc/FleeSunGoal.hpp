/**
 * @file  FleeSunGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "FindCoverGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FleeSunGoal.
 *
 */
class FleeSunGoal : public FindCoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLEESUNGOAL
public:
    class FleeSunGoal& operator=(class FleeSunGoal const &) = delete;
    FleeSunGoal(class FleeSunGoal const &) = delete;
    FleeSunGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FleeSunGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@FleeSunGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@FleeSunGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0FleeSunGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI FleeSunGoal(class Mob &, float);

};