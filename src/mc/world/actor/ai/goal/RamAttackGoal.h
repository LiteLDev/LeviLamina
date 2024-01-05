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
        // vIndex: 0, symbol: ??1Definition@RamAttackGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@RamAttackGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol:
        // ?addPreRamSoundEventByName@Definition@RamAttackGoal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void addPreRamSoundEventByName(std::string const& name);

        // symbol:
        // ?addRamImpactSoundEventByName@Definition@RamAttackGoal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void addRamImpactSoundEventByName(std::string const& name);

        // symbol: ?initialize@Definition@RamAttackGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class RamAttackGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@RamAttackGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@RamAttackGoal@@@JsonUtil@@@4@@Z
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
    // vIndex: 0, symbol: __gen_??1RamAttackGoal@@UEAA@XZ
    virtual ~RamAttackGoal() = default;

    // vIndex: 1, symbol: ?canUse@RamAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RamAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RamAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RamAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RamAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RamAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RamAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit RamAttackGoal(class Mob& mob);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_initiateRamAttack@RamAttackGoal@@IEAA_NXZ
    MCAPI bool _initiateRamAttack();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hasChargePath@RamAttackGoal@@AEAA_NXZ
    MCAPI bool _hasChargePath();

    // symbol: ?_pathablePos@RamAttackGoal@@AEAA_NAEBVBlockSource@@VBlockPos@@@Z
    MCAPI bool _pathablePos(class BlockSource const& region, class BlockPos blockPos);

    // symbol: ?_resetCooldown@RamAttackGoal@@AEAAXXZ
    MCAPI void _resetCooldown();

    // symbol: ?_tryKnockbackTarget@RamAttackGoal@@AEAAXXZ
    MCAPI void _tryKnockbackTarget();

    // NOLINTEND
};
