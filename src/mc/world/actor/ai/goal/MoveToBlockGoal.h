#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TargetSelectionMethod.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveToBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveToBlockGoal& operator=(MoveToBlockGoal const&);
    MoveToBlockGoal(MoveToBlockGoal const&);
    MoveToBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveToBlockGoal@@UEAA@XZ
    virtual ~MoveToBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveToBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveToBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveToBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MoveToBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MoveToBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveToBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0MoveToBlockGoal@@QEAA@AEAVMob@@MHHHHMVVec3@@MW4TargetSelectionMethod@@V?$vector@VActorDefinitionTrigger@@V?$allocator@VActorDefinitionTrigger@@@std@@@std@@3V?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@5@AEBVActorFilterGroup@@@Z
    MCAPI MoveToBlockGoal(class Mob& mob, float speedModifier, int searchRange, int searchHeight, int tickInterval, int stayDurationTicks, float goalRadius, class Vec3 targetPositionOffset, float chanceToStart, ::TargetSelectionMethod targetSelectionMethod, std::vector<class ActorDefinitionTrigger> onReachTriggers, std::vector<class ActorDefinitionTrigger> onStayCompletedTriggers, std::vector<class ItemDescriptor> targetBlocks, class ActorFilterGroup const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkIfStuck@MoveToBlockGoal@@AEAAXXZ
    MCAPI void _checkIfStuck();

    // symbol: ?_isValidTarget@MoveToBlockGoal@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _isValidTarget(class Block const& candidateBlock) const;

    // symbol: ?_moveToBlock@MoveToBlockGoal@@AEAAXXZ
    MCAPI void _moveToBlock();

    // symbol: ?_pathIsValid@MoveToBlockGoal@@AEAA_NPEBVPath@@@Z
    MCAPI bool _pathIsValid(class Path const* path);

    // NOLINTEND
};
