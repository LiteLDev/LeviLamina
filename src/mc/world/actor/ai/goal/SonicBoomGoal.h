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

class SonicBoomGoal : public ::Goal {
public:
    // SonicBoomGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // SonicBoomGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() = default;

        MCAPI void initialize(class EntityContext& entity, class SonicBoomGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SonicBoomGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SonicBoomGoal& operator=(SonicBoomGoal const&);
    SonicBoomGoal(SonicBoomGoal const&);
    SonicBoomGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SonicBoomGoal() = default;

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

    MCAPI explicit SonicBoomGoal(class Mob& mob);

    // NOLINTEND
};
