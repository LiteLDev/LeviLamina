#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Mob;
class TrustComponent;
struct ActorUniqueID;
struct MobDescriptor;
// clang-format on

class DefendTrustedTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkead60c;
    ::ll::UntypedStorage<8, 104> mUnkf1fa10;
    // NOLINTEND

public:
    // prevent constructor by default
    DefendTrustedTargetGoal& operator=(DefendTrustedTargetGoal const&);
    DefendTrustedTargetGoal(DefendTrustedTargetGoal const&);
    DefendTrustedTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~DefendTrustedTargetGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefendTrustedTargetGoal(
        ::Mob&                                 mob,
        ::std::vector<::MobDescriptor> const&  targetTypes,
        float                                  within,
        int                                    attackInterval,
        bool                                   mustSee,
        int                                    mustSeeForgetTicks,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::ActorDefinitionTrigger const&        onStartEvent
    );

    MCAPI ::ActorUniqueID _findTrustedTarget(::TrustComponent const& trust);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                 mob,
        ::std::vector<::MobDescriptor> const&  targetTypes,
        float                                  within,
        int                                    attackInterval,
        bool                                   mustSee,
        int                                    mustSeeForgetTicks,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::ActorDefinitionTrigger const&        onStartEvent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
