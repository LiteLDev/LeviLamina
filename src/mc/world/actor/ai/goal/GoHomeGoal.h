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

class GoHomeGoal : public ::Goal {
public:
    // GoHomeGoal inner types declare
    // clang-format off
    class GoHomeDefinition;
    // clang-format on

    // GoHomeGoal inner types define
    class GoHomeDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        GoHomeDefinition& operator=(GoHomeDefinition const&);
        GoHomeDefinition(GoHomeDefinition const&);
        GoHomeDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1GoHomeDefinition@GoHomeGoal@@UEAA@XZ
        virtual ~GoHomeDefinition() = default;

        // symbol: ?initialize@GoHomeDefinition@GoHomeGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class GoHomeGoal& goal) const;

        // symbol:
        // ?buildSchema@GoHomeDefinition@GoHomeGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGoHomeDefinition@GoHomeGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GoHomeGoal::GoHomeDefinition>>&
                root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GoHomeGoal& operator=(GoHomeGoal const&);
    GoHomeGoal(GoHomeGoal const&);
    GoHomeGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GoHomeGoal@@UEAA@XZ
    virtual ~GoHomeGoal() = default;

    // vIndex: 1, symbol: ?canUse@GoHomeGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@GoHomeGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@GoHomeGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@GoHomeGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@GoHomeGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@GoHomeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0GoHomeGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit GoHomeGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hasReachedHome@GoHomeGoal@@AEBA_NXZ
    MCAPI bool _hasReachedHome() const;

    // symbol: ?_hasRequiredComponents@GoHomeGoal@@AEBA_NXZ
    MCAPI bool _hasRequiredComponents() const;

    // symbol: ?_triggerOnFailedEvents@GoHomeGoal@@AEAAXXZ
    MCAPI void _triggerOnFailedEvents();

    // NOLINTEND
};
