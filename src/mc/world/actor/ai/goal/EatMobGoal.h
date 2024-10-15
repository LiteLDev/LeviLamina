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

class EatMobGoal : public ::Goal {
public:
    // EatMobGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // EatMobGoal inner types define
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

        MCAPI void initialize(class EntityContext& entity, class EatMobGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EatMobGoal::Definition>>& root
        );

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI void* ctor$();

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EatMobGoal& operator=(EatMobGoal const&);
    EatMobGoal(EatMobGoal const&);
    EatMobGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EatMobGoal() = default;

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

    MCAPI explicit EatMobGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
