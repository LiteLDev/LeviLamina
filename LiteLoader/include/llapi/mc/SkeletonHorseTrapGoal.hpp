/**
 * @file  SkeletonHorseTrapGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SkeletonHorseTrapGoal.
 *
 */
class SkeletonHorseTrapGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONHORSETRAPGOAL
public:
    class SkeletonHorseTrapGoal& operator=(class SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal(class SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SkeletonHorseTrapGoal();
    /**
     * @hash   -1536752912
     * @vftbl  1
     * @symbol  ?canUse\@SkeletonHorseTrapGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -543146599
     * @vftbl  4
     * @symbol  ?start\@SkeletonHorseTrapGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -424997436
     * @vftbl  6
     * @symbol  ?tick\@SkeletonHorseTrapGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1564645248
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SkeletonHorseTrapGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -484715743
     * @symbol  ??0SkeletonHorseTrapGoal\@\@QEAA\@AEAVHorse\@\@HM\@Z
     */
    MCAPI SkeletonHorseTrapGoal(class Horse &, int, float);

//private:
    /**
     * @hash   1099994520
     * @symbol  ?_createHorse\@SkeletonHorseTrapGoal\@\@AEAAPEAVHorse\@\@AEBW4Difficulty\@\@\@Z
     */
    MCAPI class Horse * _createHorse(enum class Difficulty const &);
    /**
     * @hash   407194794
     * @symbol  ?_createSkeleton\@SkeletonHorseTrapGoal\@\@AEAAPEAVSkeleton\@\@AEBW4Difficulty\@\@AEBVHorse\@\@\@Z
     */
    MCAPI class Skeleton * _createSkeleton(enum class Difficulty const &, class Horse const &);

private:

};