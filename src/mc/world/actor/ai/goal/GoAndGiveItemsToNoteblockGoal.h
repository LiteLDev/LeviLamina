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

class GoAndGiveItemsToNoteblockGoal : public ::Goal {
public:
    // GoAndGiveItemsToNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToNoteblockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@GoAndGiveItemsToNoteblockGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@GoAndGiveItemsToNoteblockGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@GoAndGiveItemsToNoteblockGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class GoAndGiveItemsToNoteblockGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@GoAndGiveItemsToNoteblockGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@GoAndGiveItemsToNoteblockGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const&                                     name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class GoAndGiveItemsToNoteblockGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GoAndGiveItemsToNoteblockGoal& operator=(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GoAndGiveItemsToNoteblockGoal@@UEAA@XZ
    virtual ~GoAndGiveItemsToNoteblockGoal() = default;

    // vIndex: 1, symbol: ?canUse@GoAndGiveItemsToNoteblockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@GoAndGiveItemsToNoteblockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@GoAndGiveItemsToNoteblockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@GoAndGiveItemsToNoteblockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@GoAndGiveItemsToNoteblockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@GoAndGiveItemsToNoteblockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0GoAndGiveItemsToNoteblockGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit GoAndGiveItemsToNoteblockGoal(class Mob& mob);

    // NOLINTEND
};
