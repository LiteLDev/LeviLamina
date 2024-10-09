#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveOutdoorsGoal : public ::BaseMoveToBlockGoal {
public:
    // MoveOutdoorsGoal inner types declare
    // clang-format off
    class MoveOutdoorsDefinition;
    // clang-format on

    // MoveOutdoorsGoal inner types define
    class MoveOutdoorsDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        MoveOutdoorsDefinition& operator=(MoveOutdoorsDefinition const&);
        MoveOutdoorsDefinition(MoveOutdoorsDefinition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~MoveOutdoorsDefinition();

        MCAPI MoveOutdoorsDefinition();

        MCAPI void initialize(class EntityContext& entity, class MoveOutdoorsGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const&                                    name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class MoveOutdoorsGoal::MoveOutdoorsDefinition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MoveOutdoorsGoal& operator=(MoveOutdoorsGoal const&);
    MoveOutdoorsGoal(MoveOutdoorsGoal const&);
    MoveOutdoorsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveOutdoorsGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    MCAPI explicit MoveOutdoorsGoal(class Mob& mob);

    MCAPI static bool mobHasClearSpaceAbove(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setNextTargetTick();

    // NOLINTEND
};
