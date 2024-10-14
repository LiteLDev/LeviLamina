#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/puv/LevelSoundEvent.h"
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

    MCAPI AdmireItemGoal(
        class Mob&                          mob,
        ::Puv::Legacy::LevelSoundEvent      sound,
        struct FloatRange                   soundIntervalRange,
        class ActorDefinitionTrigger const& onAdmireItemStart,
        class ActorDefinitionTrigger const& onAdmireItemStop
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tryPlaceItemInInventory(
        class ContainerComponent&       containerComponent,
        class ShareableComponent const& shareableComponent
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
