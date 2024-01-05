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

class VillagerCelebrationGoal : public ::Goal {
public:
    // VillagerCelebrationGoal inner types declare
    // clang-format off
    class VillagerCelebrationDefinition;
    // clang-format on

    // VillagerCelebrationGoal inner types define
    class VillagerCelebrationDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        VillagerCelebrationDefinition& operator=(VillagerCelebrationDefinition const&);
        VillagerCelebrationDefinition(VillagerCelebrationDefinition const&);
        VillagerCelebrationDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1VillagerCelebrationDefinition@VillagerCelebrationGoal@@UEAA@XZ
        virtual ~VillagerCelebrationDefinition() = default;

        // symbol:
        // ?buildSchema@VillagerCelebrationDefinition@VillagerCelebrationGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VVillagerCelebrationDefinition@VillagerCelebrationGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const&                                                  name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class VillagerCelebrationGoal::VillagerCelebrationDefinition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VillagerCelebrationGoal& operator=(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VillagerCelebrationGoal@@UEAA@XZ
    virtual ~VillagerCelebrationGoal() = default;

    // vIndex: 1, symbol: ?canUse@VillagerCelebrationGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@VillagerCelebrationGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@VillagerCelebrationGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@VillagerCelebrationGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@VillagerCelebrationGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@VillagerCelebrationGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_launchFirework@VillagerCelebrationGoal@@AEAAXXZ
    MCAPI void _launchFirework();

    // symbol: ?_setNextFireworkTick@VillagerCelebrationGoal@@AEAAXXZ
    MCAPI void _setNextFireworkTick();

    // NOLINTEND
};
