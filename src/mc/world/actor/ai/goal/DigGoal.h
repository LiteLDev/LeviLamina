#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DigGoal : public ::Goal {
public:
    // DigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // DigGoal inner types define
    enum class CanUseResult {};

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

        MCAPI void initialize(class EntityContext& entity, class DigGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DigGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DigGoal& operator=(DigGoal const&);
    DigGoal(DigGoal const&);
    DigGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DigGoal() = default;

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

    MCAPI explicit DigGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::DigGoal::CanUseResult _canUse() const;

    // NOLINTEND
};
