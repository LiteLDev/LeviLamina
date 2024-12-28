#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct ActorUniqueID;
struct MobDescriptor;
// clang-format on

class NearestPrioritizedAttackableTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    NearestPrioritizedAttackableTargetGoal& operator=(NearestPrioritizedAttackableTargetGoal const&);
    NearestPrioritizedAttackableTargetGoal(NearestPrioritizedAttackableTargetGoal const&);
    NearestPrioritizedAttackableTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 11
    virtual ::ActorUniqueID _findTarget(::MobDescriptor const** outMobDescriptor) /*override*/;

    // vIndex: 0
    virtual ~NearestPrioritizedAttackableTargetGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NearestPrioritizedAttackableTargetGoal(
        ::Mob&                                mob,
        ::std::vector<::MobDescriptor> const& targetTypes,
        float                                 within,
        int                                   attackInterval,
        bool                                  mustSee,
        int                                   mustSeeForgetTicks,
        bool                                  mustReach,
        bool                                  reselectTargets,
        int                                   scanInterval,
        float                                 targetSearchHeight,
        bool                                  attackOwner,
        int                                   persistTargetTicks,
        bool                                  setPersistent
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                mob,
        ::std::vector<::MobDescriptor> const& targetTypes,
        float                                 within,
        int                                   attackInterval,
        bool                                  mustSee,
        int                                   mustSeeForgetTicks,
        bool                                  mustReach,
        bool                                  reselectTargets,
        int                                   scanInterval,
        float                                 targetSearchHeight,
        bool                                  attackOwner,
        int                                   persistTargetTicks,
        bool                                  setPersistent
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
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI ::ActorUniqueID $_findTarget(::MobDescriptor const** outMobDescriptor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
