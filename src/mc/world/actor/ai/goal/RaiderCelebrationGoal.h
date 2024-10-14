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

class RaiderCelebrationGoal : public ::Goal {
public:
    // RaiderCelebrationGoal inner types declare
    // clang-format off
    class RaiderCelebrationDefinition;
    // clang-format on

    // RaiderCelebrationGoal inner types define
    class RaiderCelebrationDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        RaiderCelebrationDefinition& operator=(RaiderCelebrationDefinition const&);
        RaiderCelebrationDefinition(RaiderCelebrationDefinition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RaiderCelebrationDefinition() = default;

        MCAPI RaiderCelebrationDefinition();

        MCAPI void addCelebrationSoundByName(std::string const& name);

        MCAPI void initialize(class EntityContext& entity, class RaiderCelebrationGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const&                                              name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class RaiderCelebrationGoal::RaiderCelebrationDefinition>>& root
        );

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RaiderCelebrationGoal& operator=(RaiderCelebrationGoal const&);
    RaiderCelebrationGoal(RaiderCelebrationGoal const&);
    RaiderCelebrationGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RaiderCelebrationGoal() = default;

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

    MCAPI explicit RaiderCelebrationGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
