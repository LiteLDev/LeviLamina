/**
 * @file  MakeLoveGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MakeLoveGoal.
 *
 */
class MakeLoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAKELOVEGOAL
public:
    class MakeLoveGoal& operator=(class MakeLoveGoal const &) = delete;
    MakeLoveGoal(class MakeLoveGoal const &) = delete;
    MakeLoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MakeLoveGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MakeLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MakeLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@MakeLoveGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MakeLoveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0MakeLoveGoal\@\@QEAA\@AEAVVillagerBase\@\@\@Z
     */
    MCAPI MakeLoveGoal(class VillagerBase &);

//private:
    /**
     * @symbol  ?_breed\@MakeLoveGoal\@\@AEBAXAEAVVillagerBase\@\@\@Z
     */
    MCAPI void _breed(class VillagerBase &) const;
    /**
     * @symbol  ?_findMate\@MakeLoveGoal\@\@AEBAPEAVVillagerBase\@\@XZ
     */
    MCAPI class VillagerBase * _findMate() const;

private:

};