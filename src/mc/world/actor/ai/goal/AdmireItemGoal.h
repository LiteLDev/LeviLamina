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
    // vIndex: 0
    virtual ~AdmireItemGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI
    AdmireItemGoal(class Mob& mob, ::Puv::Legacy::LevelSoundEvent sound, struct FloatRange soundIntervalRange, class ActorDefinitionTrigger const&, class ActorDefinitionTrigger const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tryPlaceItemInInventory(class ContainerComponent& containerComponent, class ShareableComponent const&);

    // NOLINTEND
};
