/**
 * @file  SkeletonHorseTrapGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~SkeletonHorseTrapGoal();
    /**
     * @hash   -1757275504
     * @vftbl  1
     * @symbol ?canUse@SkeletonHorseTrapGoal@@UEAA_NXZ
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
     * @hash   -635033575
     * @vftbl  4
     * @symbol ?start@SkeletonHorseTrapGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -645535404
     * @vftbl  6
     * @symbol ?tick@SkeletonHorseTrapGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1785167840
     * @vftbl  7
     * @symbol ?appendDebugInfo@SkeletonHorseTrapGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -704715551
     * @symbol ??0SkeletonHorseTrapGoal@@QEAA@AEAVHorse@@HM@Z
     */
    MCAPI SkeletonHorseTrapGoal(class Horse &, int, float);

//private:
    /**
     * @hash   186749082
     * @symbol ?_createSkeleton@SkeletonHorseTrapGoal@@AEAAPEAVSkeleton@@AEBW4Difficulty@@AEBVHorse@@@Z
     */
    MCAPI class Skeleton * _createSkeleton(enum Difficulty const &, class Horse const &);

private:

};