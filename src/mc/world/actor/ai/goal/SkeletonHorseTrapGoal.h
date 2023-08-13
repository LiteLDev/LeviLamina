#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SkeletonHorseTrapGoal : public ::Goal {

public:
    // prevent constructor by default
    SkeletonHorseTrapGoal& operator=(SkeletonHorseTrapGoal const&) = delete;
    SkeletonHorseTrapGoal(SkeletonHorseTrapGoal const&)            = delete;
    SkeletonHorseTrapGoal()                                        = delete;

public:
    // NOLINTBEGIN
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
     * @vftbl 4
     * @symbol ?start\@SkeletonHorseTrapGoal\@\@UEAAXXZ
     */
    virtual void start();
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_createHorse\@SkeletonHorseTrapGoal\@\@AEAAPEAVHorse\@\@AEBW4Difficulty\@\@\@Z
     */
    MCAPI class Horse* _createHorse(enum class Difficulty const&);
    /**
     * @symbol ?_createSkeleton\@SkeletonHorseTrapGoal\@\@AEAAPEAVSkeleton\@\@AEBW4Difficulty\@\@AEBVHorse\@\@\@Z
     */
    MCAPI class Skeleton* _createSkeleton(enum class Difficulty const&, class Horse const&);
    // NOLINTEND
};
