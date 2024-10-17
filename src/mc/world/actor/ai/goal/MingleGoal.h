#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

class MingleGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    MingleGoal& operator=(MingleGoal const&);
    MingleGoal(MingleGoal const&);
    MingleGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MingleGoal() = default;

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

    MCAPI MingleGoal(
        class Mob&                       actor,
        float                            speedModifier,
        float                            mingleDurationSecs,
        float                            cooldownDurationSecs,
        struct ActorDefinitionIdentifier desiredPartnerType,
        float                            mingleDistance
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _findNewPartner(struct ActorUniqueID previousPartnerId);

    MCAPI class MingleComponent& _getMingleComponent() const;

    MCAPI bool _isWithinInteractRange(class Actor& partner) const;

    MCAPI static class MingleComponent* _tryGetMingleComponent(class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Mob&                       actor,
        float                            speedModifier,
        float                            mingleDurationSecs,
        float                            cooldownDurationSecs,
        struct ActorDefinitionIdentifier desiredPartnerType,
        float                            mingleDistance
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    MCAPI static int const& FIND_PARTNER_INTERVAL_TICKS();

    MCAPI static int const& SPEAK_INTERVAL_TICKS_MAX();

    MCAPI static int const& SPEAK_INTERVAL_TICKS_MIN();

    // NOLINTEND
};
