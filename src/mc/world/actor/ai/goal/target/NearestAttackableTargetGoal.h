#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct MobDescriptor;
struct Tick;
// clang-format on

class NearestAttackableTargetGoal : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                       mTargetID;
    ::ll::TypedStorage<8, 8, ::MobDescriptor const*>                                mTargetDescriptor;
    ::ll::TypedStorage<1, 1, bool>                                                  mReselectTargets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::MobDescriptor const*, ::Tick>> mTargetCooldowns;
    ::ll::TypedStorage<4, 4, int>                                                   mAttackInterval;
    ::ll::TypedStorage<4, 4, int>                                                   mScanInterval;
    ::ll::TypedStorage<1, 1, bool>                                                  mSetPersistent;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetInvisibleMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetSneakVisibilityMultiplier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 11
    virtual ::ActorUniqueID _findTarget(::MobDescriptor const** outMobDescriptor);

    // vIndex: 0
    virtual ~NearestAttackableTargetGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NearestAttackableTargetGoal(::Mob& mob);

    MCNAPI bool _canStartSearching();

    MCNAPI bool _isTargetInCooldown(::MobDescriptor const& descriptor) const;

    MCNAPI bool _selectTarget();

    MCNAPI bool isTargetVisible(::Mob const& mob, float maxDistance, float maxHeight) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI ::ActorUniqueID $_findTarget(::MobDescriptor const** outMobDescriptor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
