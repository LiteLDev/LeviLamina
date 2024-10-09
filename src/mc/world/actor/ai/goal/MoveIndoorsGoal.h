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

class MoveIndoorsGoal : public ::Goal {
public:
    // MoveIndoorsGoal inner types declare
    // clang-format off
    class MoveIndoorsDefinition;
    // clang-format on

    // MoveIndoorsGoal inner types define
    class MoveIndoorsDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        MoveIndoorsDefinition& operator=(MoveIndoorsDefinition const&);
        MoveIndoorsDefinition(MoveIndoorsDefinition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MoveIndoorsDefinition() = default;

        MCAPI MoveIndoorsDefinition();

        MCAPI void addCooldownTicksBySeconds(float const& seconds);

        MCAPI void initialize(class EntityContext& entity, class MoveIndoorsGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const&                                  name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class MoveIndoorsGoal::MoveIndoorsDefinition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MoveIndoorsGoal& operator=(MoveIndoorsGoal const&);
    MoveIndoorsGoal(MoveIndoorsGoal const&);
    MoveIndoorsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveIndoorsGoal() = default;

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

    MCAPI explicit MoveIndoorsGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isInside(class BlockPos const& pos);

    MCAPI void _startPathfinding();

    // NOLINTEND
};
