/**
 * @file  PanicGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PanicGoal.
 *
 */
class PanicGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PANICGOAL
public:
    class PanicGoal& operator=(class PanicGoal const &) = delete;
    PanicGoal(class PanicGoal const &) = delete;
    PanicGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PanicGoal();
    /**
     * @hash   -629287946
     * @vftbl  1
     * @symbol  ?canUse\@PanicGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -857337948
     * @vftbl  2
     * @symbol  ?canContinueToUse\@PanicGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1233065087
     * @vftbl  4
     * @symbol  ?start\@PanicGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -717080417
     * @vftbl  5
     * @symbol  ?stop\@PanicGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -2042906198
     * @vftbl  6
     * @symbol  ?tick\@PanicGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1667809590
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@PanicGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   138603182
     * @symbol  ??0PanicGoal\@\@QEAA\@AEAVMob\@\@M_NW4LevelSoundEvent\@\@UFloatRange\@\@11V?$vector\@W4ActorDamageCause\@\@V?$allocator\@W4ActorDamageCause\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PanicGoal(class Mob &, float, bool, enum class LevelSoundEvent, struct FloatRange, bool, bool, std::vector<enum class ActorDamageCause>);

//private:
    /**
     * @hash   530407569
     * @symbol  ?_tryGeneratePathEnd\@PanicGoal\@\@AEAA_NXZ
     */
    MCAPI bool _tryGeneratePathEnd();

private:

};