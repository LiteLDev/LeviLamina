#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkeletonHorseTrapGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONHORSETRAPGOAL
public:
    SkeletonHorseTrapGoal& operator=(SkeletonHorseTrapGoal const&) = delete;
    SkeletonHorseTrapGoal(SkeletonHorseTrapGoal const&)            = delete;
    SkeletonHorseTrapGoal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SkeletonHorseTrapGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SkeletonHorseTrapGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@SkeletonHorseTrapGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SkeletonHorseTrapGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0SkeletonHorseTrapGoal\@\@QEAA\@AEAVHorse\@\@HM\@Z
     */
    MCAPI SkeletonHorseTrapGoal(class Horse&, int, float);

    // private:
    /**
     * @symbol ?_createHorse\@SkeletonHorseTrapGoal\@\@AEAAPEAVHorse\@\@AEBW4Difficulty\@\@\@Z
     */
    MCAPI class Horse* _createHorse(enum class Difficulty const&);
    /**
     * @symbol ?_createSkeleton\@SkeletonHorseTrapGoal\@\@AEAAPEAVSkeleton\@\@AEBW4Difficulty\@\@AEBVHorse\@\@\@Z
     */
    MCAPI class Skeleton* _createSkeleton(enum class Difficulty const&, class Horse const&);

private:
};
