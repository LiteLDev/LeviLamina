#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

class DefendTrustedTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    DefendTrustedTargetGoal& operator=(DefendTrustedTargetGoal const&);
    DefendTrustedTargetGoal(DefendTrustedTargetGoal const&);
    DefendTrustedTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DefendTrustedTargetGoal@@UEAA@XZ
    virtual ~DefendTrustedTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@DefendTrustedTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@DefendTrustedTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DefendTrustedTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0DefendTrustedTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MH_NHW4LevelSoundEvent@Legacy@Puv@@AEBVActorDefinitionTrigger@@@Z
    MCAPI DefendTrustedTargetGoal(
        class Mob&                               mob,
        std::vector<struct MobDescriptor> const& targetTypes,
        float                                    within,
        int,
        bool                                mustSee,
        int                                 mustSeeForgetTicks,
        ::Puv::Legacy::LevelSoundEvent      sound,
        class ActorDefinitionTrigger const& onStartEvent
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findTrustedTarget@DefendTrustedTargetGoal@@AEAA?AUActorUniqueID@@AEBVTrustComponent@@@Z
    MCAPI struct ActorUniqueID _findTrustedTarget(class TrustComponent const& trust);

    // NOLINTEND
};
