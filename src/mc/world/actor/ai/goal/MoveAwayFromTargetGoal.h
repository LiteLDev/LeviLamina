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

class MoveAwayFromTargetGoal : public ::Goal {
public:
    // MoveAwayFromTargetGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // MoveAwayFromTargetGoal inner types define
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

        MCAPI void initialize(class EntityContext&, class MoveAwayFromTargetGoal&) const;

        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveAwayFromTargetGoal::Definition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MoveAwayFromTargetGoal& operator=(MoveAwayFromTargetGoal const&);
    MoveAwayFromTargetGoal(MoveAwayFromTargetGoal const&);
    MoveAwayFromTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveAwayFromTargetGoal() = default;

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
    virtual void appendDebugInfo(std::string&) const;

    MCAPI explicit MoveAwayFromTargetGoal(class Mob&);

    // NOLINTEND
};
