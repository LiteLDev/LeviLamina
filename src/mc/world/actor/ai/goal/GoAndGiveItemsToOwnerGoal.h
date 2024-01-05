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

class GoAndGiveItemsToOwnerGoal : public ::Goal {
public:
    // GoAndGiveItemsToOwnerGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToOwnerGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@GoAndGiveItemsToOwnerGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@GoAndGiveItemsToOwnerGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@GoAndGiveItemsToOwnerGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class GoAndGiveItemsToOwnerGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@GoAndGiveItemsToOwnerGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@GoAndGiveItemsToOwnerGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const&                                 name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class GoAndGiveItemsToOwnerGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GoAndGiveItemsToOwnerGoal& operator=(GoAndGiveItemsToOwnerGoal const&);
    GoAndGiveItemsToOwnerGoal(GoAndGiveItemsToOwnerGoal const&);
    GoAndGiveItemsToOwnerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GoAndGiveItemsToOwnerGoal@@UEAA@XZ
    virtual ~GoAndGiveItemsToOwnerGoal() = default;

    // vIndex: 1, symbol: ?canUse@GoAndGiveItemsToOwnerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@GoAndGiveItemsToOwnerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@GoAndGiveItemsToOwnerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@GoAndGiveItemsToOwnerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@GoAndGiveItemsToOwnerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@GoAndGiveItemsToOwnerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0GoAndGiveItemsToOwnerGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit GoAndGiveItemsToOwnerGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attemptToGiveItem@GoAndGiveItemsToOwnerGoal@@AEAA_NXZ
    MCAPI bool _attemptToGiveItem();

    // NOLINTEND
};
