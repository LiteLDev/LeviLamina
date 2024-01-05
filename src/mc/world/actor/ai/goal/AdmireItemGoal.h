#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class AdmireItemGoal : public ::Goal {
public:
    // prevent constructor by default
    AdmireItemGoal& operator=(AdmireItemGoal const&);
    AdmireItemGoal(AdmireItemGoal const&);
    AdmireItemGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AdmireItemGoal@@UEAA@XZ
    virtual ~AdmireItemGoal() = default;

    // vIndex: 1, symbol: ?canUse@AdmireItemGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@AdmireItemGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@AdmireItemGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@AdmireItemGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@AdmireItemGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@AdmireItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0AdmireItemGoal@@QEAA@AEAVMob@@W4LevelSoundEvent@Legacy@Puv@@UFloatRange@@AEBVActorDefinitionTrigger@@3@Z
    MCAPI
    AdmireItemGoal(class Mob& mob, ::Puv::Legacy::LevelSoundEvent sound, struct FloatRange soundIntervalRange, class ActorDefinitionTrigger const&, class ActorDefinitionTrigger const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryPlaceItemInInventory@AdmireItemGoal@@AEAAXAEAVContainerComponent@@AEBVShareableComponent@@@Z
    MCAPI void _tryPlaceItemInInventory(class ContainerComponent& containerComponent, class ShareableComponent const&);

    // NOLINTEND
};
