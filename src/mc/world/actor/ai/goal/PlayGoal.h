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
        // vIndex: 0, symbol: __gen_??1PlayDefinition@PlayGoal@@UEAA@XZ
        virtual ~PlayDefinition() = default;

        // symbol: ?initialize@PlayDefinition@PlayGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class PlayGoal& goal) const;

        // symbol:
        // ?buildSchema@PlayDefinition@PlayGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VPlayDefinition@PlayGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PlayGoal::PlayDefinition>>& root
        );

        // symbol: ?getStrictParsingVersion@PlayDefinition@PlayGoal@@SA?AVSemVersion@@XZ
        MCAPI static class SemVersion getStrictParsingVersion();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlayGoal& operator=(PlayGoal const&);
    PlayGoal(PlayGoal const&);
    PlayGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayGoal@@UEAA@XZ
    virtual ~PlayGoal() = default;

    // vIndex: 1, symbol: ?canUse@PlayGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@PlayGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@PlayGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@PlayGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@PlayGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@PlayGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0PlayGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit PlayGoal(class Mob& mob);

    // NOLINTEND
};
