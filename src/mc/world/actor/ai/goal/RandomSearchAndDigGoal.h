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

class RandomSearchAndDigGoal : public ::Goal {
public:
    // RandomSearchAndDigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RandomSearchAndDigGoal inner types define
    enum class CanUseOutcome {};

    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition();

        MCAPI Definition();

        MCAPI void addBlockDescriptor(class BlockDescriptor const& blockDescriptor);

        MCAPI void initialize(class EntityContext& entity, class RandomSearchAndDigGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const&                              name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class RandomSearchAndDigGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RandomSearchAndDigGoal& operator=(RandomSearchAndDigGoal const&);
    RandomSearchAndDigGoal(RandomSearchAndDigGoal const&);
    RandomSearchAndDigGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomSearchAndDigGoal() = default;

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

    MCAPI explicit RandomSearchAndDigGoal(class Mob& mob);

    MCAPI ::RandomSearchAndDigGoal::CanUseOutcome _canUse();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _digUpItems();

    MCAPI bool _isValidTarget(class BlockSource const& region, class BlockPos pos) const;

    MCAPI void _triggerEvent(class ActorDefinitionTrigger const& eventTrigger) const;

    // NOLINTEND
};
