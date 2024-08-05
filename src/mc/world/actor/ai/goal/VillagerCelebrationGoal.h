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

class VillagerCelebrationGoal : public ::Goal {
public:
    // VillagerCelebrationGoal inner types declare
    // clang-format off
    class VillagerCelebrationDefinition;
    // clang-format on

    // VillagerCelebrationGoal inner types define
    class VillagerCelebrationDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        VillagerCelebrationDefinition& operator=(VillagerCelebrationDefinition const&);
        VillagerCelebrationDefinition(VillagerCelebrationDefinition const&);
        VillagerCelebrationDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~VillagerCelebrationDefinition() = default;

        MCAPI static void buildSchema(
            std::string const&                                                  name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class VillagerCelebrationGoal::VillagerCelebrationDefinition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VillagerCelebrationGoal& operator=(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VillagerCelebrationGoal() = default;

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

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _launchFirework();

    MCAPI void _setNextFireworkTick();

    // NOLINTEND
};
