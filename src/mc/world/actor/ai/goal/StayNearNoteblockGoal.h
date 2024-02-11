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

class StayNearNoteblockGoal : public ::Goal {
public:
    // StayNearNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // StayNearNoteblockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@StayNearNoteblockGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol:
        // ?buildSchema@Definition@StayNearNoteblockGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@StayNearNoteblockGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const&                             name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class StayNearNoteblockGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StayNearNoteblockGoal& operator=(StayNearNoteblockGoal const&);
    StayNearNoteblockGoal(StayNearNoteblockGoal const&);
    StayNearNoteblockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StayNearNoteblockGoal@@UEAA@XZ
    virtual ~StayNearNoteblockGoal() = default;

    // vIndex: 1, symbol: ?canUse@StayNearNoteblockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@StayNearNoteblockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@StayNearNoteblockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@StayNearNoteblockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@StayNearNoteblockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@StayNearNoteblockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hasLastVibrationAtNoteblock@StayNearNoteblockGoal@@AEAA?BV?$optional@VBlockPos@@@std@@XZ
    MCAPI std::optional<class BlockPos> const _hasLastVibrationAtNoteblock();

    // NOLINTEND
};
