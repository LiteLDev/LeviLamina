#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class BaseMoveToBlockGoal : public ::BaseMoveToGoal {

public:
    // prevent constructor by default
    BaseMoveToBlockGoal& operator=(BaseMoveToBlockGoal const&) = delete;
    BaseMoveToBlockGoal(BaseMoveToBlockGoal const&)            = delete;
    BaseMoveToBlockGoal()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@BaseMoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BaseMoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@BaseMoveToBlockGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@BaseMoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOVETOBLOCKGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseMoveToBlockGoal(); // NOLINT
#endif
    /**
     * @symbol ??0BaseMoveToBlockGoal\@\@QEAA\@AEAVMob\@\@MHHHMM\@Z
     */
    MCAPI BaseMoveToBlockGoal(class Mob&, float, int, int, int, float, float); // NOLINT
};
