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

class JumpAroundTargetGoal : public ::Goal {
public:
    // JumpAroundTargetGoal inner types declare
    // clang-format off
    class Definition;
    struct Jump;
    // clang-format on

    // JumpAroundTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@JumpAroundTargetGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ?initialize@Definition@JumpAroundTargetGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class JumpAroundTargetGoal&) const;

        // symbol:
        // ?buildSchema@Definition@JumpAroundTargetGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@JumpAroundTargetGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class JumpAroundTargetGoal::Definition>>&);

        // NOLINTEND
    };

    struct Jump {
    public:
        // prevent constructor by default
        Jump& operator=(Jump const&);
        Jump(Jump const&);
        Jump();
    };

public:
    // prevent constructor by default
    JumpAroundTargetGoal& operator=(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1JumpAroundTargetGoal@@UEAA@XZ
    virtual ~JumpAroundTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@JumpAroundTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@JumpAroundTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@JumpAroundTargetGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@JumpAroundTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@JumpAroundTargetGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@JumpAroundTargetGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@JumpAroundTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0JumpAroundTargetGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit JumpAroundTargetGoal(class Mob&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_calculateOptimalJumpVector@JumpAroundTargetGoal@@AEBA?AV?$optional@UJump@JumpAroundTargetGoal@@@std@@AEBVVec3@@@Z
    MCAPI std::optional<struct JumpAroundTargetGoal::Jump> _calculateOptimalJumpVector(class Vec3 const&) const;

    // symbol: ?_snapToSurface@JumpAroundTargetGoal@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVVec3@@@Z
    MCAPI std::optional<class BlockPos> _snapToSurface(class Vec3 const&) const;

    // NOLINTEND
};
