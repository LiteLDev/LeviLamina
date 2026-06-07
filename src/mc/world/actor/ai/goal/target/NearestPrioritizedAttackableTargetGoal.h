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
    NearestPrioritizedAttackableTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ::ActorUniqueID _findTarget(::MobDescriptor const** outMobDescriptor) /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI ::ActorUniqueID $_findTarget(::MobDescriptor const** outMobDescriptor);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
