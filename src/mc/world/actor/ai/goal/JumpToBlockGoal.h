#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class JumpToBlockGoal : public ::Goal {
public:
    // JumpToBlockGoal inner types declare
    // clang-format off
    class Definition;
    struct WeightedJumpToBlockPos;
    // clang-format on

    // JumpToBlockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@JumpToBlockGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@JumpToBlockGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@JumpToBlockGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class JumpToBlockGoal&) const;

        // symbol:
        // ?buildSchema@Definition@JumpToBlockGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@JumpToBlockGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class JumpToBlockGoal::Definition>>&);

        // NOLINTEND
    };

    struct WeightedJumpToBlockPos {
    public:
        // prevent constructor by default
        WeightedJumpToBlockPos& operator=(WeightedJumpToBlockPos const&);
        WeightedJumpToBlockPos(WeightedJumpToBlockPos const&);
        WeightedJumpToBlockPos();
    };

public:
    // prevent constructor by default
    JumpToBlockGoal& operator=(JumpToBlockGoal const&);
    JumpToBlockGoal(JumpToBlockGoal const&);
    JumpToBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~JumpToBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@JumpToBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@JumpToBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@JumpToBlockGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@JumpToBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@JumpToBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@JumpToBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@JumpToBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0JumpToBlockGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit JumpToBlockGoal(class Mob&);

    // symbol: ?resetCooldown@JumpToBlockGoal@@QEAAXXZ
    MCAPI void resetCooldown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateJumpCurve@JumpToBlockGoal@@AEAA_NMAEBVBlockPos@@AEAUWeightedJumpToBlockPos@1@@Z
    MCAPI bool _calculateJumpCurve(float, class BlockPos const&, struct JumpToBlockGoal::WeightedJumpToBlockPos&);

    // symbol: ?_clearGoalState@JumpToBlockGoal@@AEAAXXZ
    MCAPI void _clearGoalState();

    // symbol: ?_findCandidateBlocks@JumpToBlockGoal@@AEAA_NAEAVNavigationComponent@@@Z
    MCAPI bool _findCandidateBlocks(class NavigationComponent&);

    // symbol: ?_findJumpableBlocks@JumpToBlockGoal@@AEAA_N_N@Z
    MCAPI bool _findJumpableBlocks(bool);

    // symbol: ?_findTargetBlock@JumpToBlockGoal@@AEAA_NXZ
    MCAPI bool _findTargetBlock();

    // symbol: ?_validTransition@JumpToBlockGoal@@AEBA_NAEBVVec3@@0@Z
    MCAPI bool _validTransition(class Vec3 const&, class Vec3 const&) const;

    // NOLINTEND
};
