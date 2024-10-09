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

class DrinkMilkGoal : public ::Goal {
public:
    // DrinkMilkGoal inner types declare
    // clang-format off
    class DrinkMilkDefinition;
    // clang-format on

    // DrinkMilkGoal inner types define
    class DrinkMilkDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        DrinkMilkDefinition& operator=(DrinkMilkDefinition const&);
        DrinkMilkDefinition(DrinkMilkDefinition const&);
        DrinkMilkDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~DrinkMilkDefinition() = default;

        MCAPI void initialize(class EntityContext& entity, class DrinkMilkGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const&                              name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class DrinkMilkGoal::DrinkMilkDefinition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DrinkMilkGoal& operator=(DrinkMilkGoal const&);
    DrinkMilkGoal(DrinkMilkGoal const&);
    DrinkMilkGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DrinkMilkGoal() = default;

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

    MCAPI explicit DrinkMilkGoal(class Mob& mob);

    // NOLINTEND
};
