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

class RamAttackGoal : public ::Goal {
public:
    // RamAttackGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RamAttackGoal inner types define
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

        MCAPI void addPreRamSoundEventByName(std::string const& name);

        MCAPI void addRamImpactSoundEventByName(std::string const& name);

        MCAPI void initialize(class EntityContext& entity, class RamAttackGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RamAttackGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RamAttackGoal& operator=(RamAttackGoal const&);
    RamAttackGoal(RamAttackGoal const&);
    RamAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RamAttackGoal() = default;

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

    MCAPI explicit RamAttackGoal(class Mob& mob);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _initiateRamAttack();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _hasChargePath();

    MCAPI bool _pathablePos(class BlockSource const& region, class BlockPos blockPos);

    MCAPI void _resetCooldown();

    MCAPI void _tryKnockbackTarget();

    // NOLINTEND
};
