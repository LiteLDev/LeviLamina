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

class RoarGoal : public ::Goal {
public:
    // RoarGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RoarGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() = default;

        MCAPI Definition();

        MCAPI void initialize(class EntityContext& entity, class RoarGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RoarGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RoarGoal& operator=(RoarGoal const&);
    RoarGoal(RoarGoal const&);
    RoarGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RoarGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit RoarGoal(class Mob& mob);

    // NOLINTEND
};
