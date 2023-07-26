#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveToBlockGoal {

public:
    // prevent constructor by default
    MoveToBlockGoal& operator=(MoveToBlockGoal const&) = delete;
    MoveToBlockGoal(MoveToBlockGoal const&)            = delete;
    MoveToBlockGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MoveToBlockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveToBlockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveToBlockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol
     * ??0MoveToBlockGoal\@\@QEAA\@AEAVMob\@\@MHHHHMVVec3\@\@MW4TargetSelectionMethod\@\@V?$vector\@VActorDefinitionTrigger\@\@V?$allocator\@VActorDefinitionTrigger\@\@\@std\@\@\@std\@\@3V?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@5\@AEBVActorFilterGroup\@\@\@Z
     */
    MCAPI
    MoveToBlockGoal(class Mob&, float, int, int, int, int, float, class Vec3, float, enum class TargetSelectionMethod, std::vector<class ActorDefinitionTrigger>, std::vector<class ActorDefinitionTrigger>, std::vector<class ItemDescriptor>, class ActorFilterGroup const&); // NOLINT

    // private:
    /**
     * @symbol ?_checkIfStuck\@MoveToBlockGoal\@\@AEAAXXZ
     */
    MCAPI void _checkIfStuck(); // NOLINT
    /**
     * @symbol ?_isValidTarget\@MoveToBlockGoal\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _isValidTarget(class Block const&) const; // NOLINT
    /**
     * @symbol ?_moveToBlock\@MoveToBlockGoal\@\@AEAAXXZ
     */
    MCAPI void _moveToBlock(); // NOLINT
    /**
     * @symbol ?_pathIsValid\@MoveToBlockGoal\@\@AEAA_NPEBVPath\@\@\@Z
     */
    MCAPI bool _pathIsValid(class Path const*); // NOLINT

private:
};
