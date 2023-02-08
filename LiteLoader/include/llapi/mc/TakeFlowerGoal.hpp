/**
 * @file  TakeFlowerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TakeFlowerGoal.
 *
 */
class TakeFlowerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEFLOWERGOAL
public:
    class TakeFlowerGoal& operator=(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TakeFlowerGoal();
    /**
     * @hash   -628169701
     * @vftbl  1
     * @symbol  ?canUse\@TakeFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -570482615
     * @vftbl  2
     * @symbol  ?canContinueToUse\@TakeFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -689244012
     * @vftbl  4
     * @symbol  ?start\@TakeFlowerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   566218260
     * @vftbl  5
     * @symbol  ?stop\@TakeFlowerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   360475263
     * @vftbl  6
     * @symbol  ?tick\@TakeFlowerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1399299947
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@TakeFlowerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1601260840
     * @symbol  ??0TakeFlowerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI TakeFlowerGoal(class Mob &);

};