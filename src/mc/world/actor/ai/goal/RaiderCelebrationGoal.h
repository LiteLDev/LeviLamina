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

class RaiderCelebrationGoal : public ::Goal {
public:
    // RaiderCelebrationGoal inner types declare
    // clang-format off
    class RaiderCelebrationDefinition;
    // clang-format on

    // RaiderCelebrationGoal inner types define
    class RaiderCelebrationDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        RaiderCelebrationDefinition& operator=(RaiderCelebrationDefinition const&);
        RaiderCelebrationDefinition(RaiderCelebrationDefinition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1RaiderCelebrationDefinition@RaiderCelebrationGoal@@UEAA@XZ
        virtual ~RaiderCelebrationDefinition() = default;

        // symbol: ??0RaiderCelebrationDefinition@RaiderCelebrationGoal@@QEAA@XZ
        MCAPI RaiderCelebrationDefinition();

        // symbol:
        // ?addCelebrationSoundByName@RaiderCelebrationDefinition@RaiderCelebrationGoal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void addCelebrationSoundByName(std::string const& name);

        // symbol: ?initialize@RaiderCelebrationDefinition@RaiderCelebrationGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class RaiderCelebrationGoal& goal) const;

        // symbol:
        // ?buildSchema@RaiderCelebrationDefinition@RaiderCelebrationGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VRaiderCelebrationDefinition@RaiderCelebrationGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const&                                              name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class RaiderCelebrationGoal::RaiderCelebrationDefinition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RaiderCelebrationGoal& operator=(RaiderCelebrationGoal const&);
    RaiderCelebrationGoal(RaiderCelebrationGoal const&);
    RaiderCelebrationGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RaiderCelebrationGoal@@UEAA@XZ
    virtual ~RaiderCelebrationGoal() = default;

    // vIndex: 1, symbol: ?canUse@RaiderCelebrationGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RaiderCelebrationGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RaiderCelebrationGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RaiderCelebrationGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RaiderCelebrationGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RaiderCelebrationGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RaiderCelebrationGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit RaiderCelebrationGoal(class Mob& mob);

    // NOLINTEND
};
