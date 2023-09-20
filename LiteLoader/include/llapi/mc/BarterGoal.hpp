/**
 * @file  BarterGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Goal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BarterGoal.
 *
 */
class BarterGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARTERGOAL
public:
    class BarterGoal& operator=(class BarterGoal const &) = delete;
    BarterGoal(class BarterGoal const &) = delete;
    BarterGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@BarterGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BarterGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@BarterGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@BarterGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0BarterGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI BarterGoal(class Mob &);

//private:
    /**
     * @symbol ?_getThrowVector\@BarterGoal\@\@AEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 _getThrowVector();
    /**
     * @symbol ?_sendBarterEventPacket\@BarterGoal\@\@AEAAXPEAVBarterComponent\@\@\@Z
     */
    MCAPI void _sendBarterEventPacket(class BarterComponent *);

private:

};
