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

class PlayGoal : public ::Goal {
public:
    // PlayGoal inner types declare
    // clang-format off
    class PlayDefinition;
    // clang-format on

    // PlayGoal inner types define
    class PlayDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        PlayDefinition& operator=(PlayDefinition const&);
        PlayDefinition(PlayDefinition const&);
        PlayDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~PlayDefinition() = default;

        MCAPI void initialize(class EntityContext& entity, class PlayGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PlayGoal::PlayDefinition>>& root
        );

        MCAPI static class SemVersion getStrictParsingVersion();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlayGoal& operator=(PlayGoal const&);
    PlayGoal(PlayGoal const&);
    PlayGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayGoal() = default;

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

    MCAPI explicit PlayGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
