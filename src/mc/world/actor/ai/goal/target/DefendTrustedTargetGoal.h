#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

class DefendTrustedTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    DefendTrustedTargetGoal& operator=(DefendTrustedTargetGoal const&);
    DefendTrustedTargetGoal(DefendTrustedTargetGoal const&);
    DefendTrustedTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefendTrustedTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI DefendTrustedTargetGoal(
        class Mob&                               mob,
        std::vector<struct MobDescriptor> const& targetTypes,
        float                                    within,
        int                                      attackInterval,
        bool                                     mustSee,
        int                                      mustSeeForgetTicks,
        ::Puv::Legacy::LevelSoundEvent           sound,
        class ActorDefinitionTrigger const&      onStartEvent
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct ActorUniqueID _findTrustedTarget(class TrustComponent const& trust);

    // NOLINTEND
};
