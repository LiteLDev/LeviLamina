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

class KnockbackRoarGoal : public ::Goal {
public:
    // KnockbackRoarGoal inner types declare
    // clang-format off
    class KnockbackRoarDefinition;
    // clang-format on

    // KnockbackRoarGoal inner types define
    class KnockbackRoarDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        KnockbackRoarDefinition& operator=(KnockbackRoarDefinition const&);
        KnockbackRoarDefinition(KnockbackRoarDefinition const&);
        KnockbackRoarDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1KnockbackRoarDefinition@@@UEAA@XZ
        virtual ~KnockbackRoarDefinition();

        // symbol: ?initialize@KnockbackRoarDefinition@KnockbackRoarGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class KnockbackRoarGoal&) const;

        // symbol:
        // ?buildSchema@KnockbackRoarDefinition@KnockbackRoarGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VKnockbackRoarDefinition@KnockbackRoarGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class KnockbackRoarGoal::KnockbackRoarDefinition>>&);

        // symbol: ?getStrictParsingVersion@KnockbackRoarDefinition@KnockbackRoarGoal@@SA?AVSemVersion@@XZ
        MCAPI static class SemVersion getStrictParsingVersion();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    KnockbackRoarGoal& operator=(KnockbackRoarGoal const&);
    KnockbackRoarGoal(KnockbackRoarGoal const&);
    KnockbackRoarGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~KnockbackRoarGoal() = default;

    // vIndex: 1, symbol: ?canUse@KnockbackRoarGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@KnockbackRoarGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@KnockbackRoarGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@KnockbackRoarGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@KnockbackRoarGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@KnockbackRoarGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0KnockbackRoarGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit KnockbackRoarGoal(class Mob&);

    // NOLINTEND
};
