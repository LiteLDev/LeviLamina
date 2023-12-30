#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SneezeGoal : public ::Goal {
public:
    // prevent constructor by default
    SneezeGoal& operator=(SneezeGoal const&);
    SneezeGoal(SneezeGoal const&);
    SneezeGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SneezeGoal@@UEAA@XZ
    virtual ~SneezeGoal() = default;

    // vIndex: 1, symbol: ?canUse@SneezeGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SneezeGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SneezeGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SneezeGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SneezeGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SneezeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0SneezeGoal@@QEAA@AEAVMob@@MMMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11MAEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@3@M@Z
    MCAPI SneezeGoal(
        class Mob&                               mob,
        float                                    cooldownTime,
        float                                    probability,
        float                                    dropItemChance,
        std::string const&                       lootTable,
        std::string const&                       sneezeSound,
        std::string const&                       preSneezeSound,
        float                                    prepareTime,
        std::vector<struct MobDescriptor> const& reactMobFilters,
        float                                    reactWithin
    );

    // NOLINTEND
};
