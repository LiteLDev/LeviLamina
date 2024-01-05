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
        // vIndex: 0, symbol: ??1Definition@RandomSearchAndDigGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@RandomSearchAndDigGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?addBlockDescriptor@Definition@RandomSearchAndDigGoal@@QEAAXAEBVBlockDescriptor@@@Z
        MCAPI void addBlockDescriptor(class BlockDescriptor const&);

        // symbol: ?initialize@Definition@RandomSearchAndDigGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class RandomSearchAndDigGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@RandomSearchAndDigGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@RandomSearchAndDigGoal@@@JsonUtil@@@4@@Z
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
    // vIndex: 0, symbol: __gen_??1RandomSearchAndDigGoal@@UEAA@XZ
    virtual ~RandomSearchAndDigGoal() = default;

    // vIndex: 1, symbol: ?canUse@RandomSearchAndDigGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomSearchAndDigGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RandomSearchAndDigGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RandomSearchAndDigGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RandomSearchAndDigGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RandomSearchAndDigGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RandomSearchAndDigGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit RandomSearchAndDigGoal(class Mob& mob);

    // symbol: ?_canUse@RandomSearchAndDigGoal@@QEAA?AW4CanUseOutcome@1@XZ
    MCAPI ::RandomSearchAndDigGoal::CanUseOutcome _canUse();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_digUpItems@RandomSearchAndDigGoal@@AEAAXXZ
    MCAPI void _digUpItems();

    // symbol: ?_isValidTarget@RandomSearchAndDigGoal@@AEBA_NAEBVBlockSource@@VBlockPos@@@Z
    MCAPI bool _isValidTarget(class BlockSource const&, class BlockPos) const;

    // symbol: ?_triggerEvent@RandomSearchAndDigGoal@@AEBAXAEBVActorDefinitionTrigger@@@Z
    MCAPI void _triggerEvent(class ActorDefinitionTrigger const&) const;

    // NOLINTEND
};
