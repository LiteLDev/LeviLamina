#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
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
        // vIndex: 0
        virtual ~Definition();

        MCAPI void initialize(class EntityContext& entity, class JumpAroundTargetGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const&                            name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class JumpAroundTargetGoal::Definition>>& root
        );

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
    // vIndex: 0
    virtual ~JumpAroundTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit JumpAroundTargetGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<struct JumpAroundTargetGoal::Jump> _calculateOptimalJumpVector(class Vec3 const& targetPosition
    ) const;

    MCAPI std::optional<class BlockPos> _snapToSurface(class Vec3 const& targetPosition) const;

    // NOLINTEND
};
