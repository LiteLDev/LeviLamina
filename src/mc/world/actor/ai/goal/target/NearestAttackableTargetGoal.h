#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct ActorUniqueID;
struct MobDescriptor;
// clang-format on

class NearestAttackableTargetGoal : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5c5325;
    ::ll::UntypedStorage<8, 8>  mUnkca975d;
    ::ll::UntypedStorage<1, 1>  mUnkeaf412;
    ::ll::UntypedStorage<8, 64> mUnk19ab4e;
    ::ll::UntypedStorage<4, 4>  mUnkf98960;
    ::ll::UntypedStorage<4, 4>  mUnk54025b;
    ::ll::UntypedStorage<1, 1>  mUnk5e8198;
    ::ll::UntypedStorage<4, 4>  mUnk5db5ca;
    ::ll::UntypedStorage<4, 4>  mUnkf72696;
    ::ll::UntypedStorage<4, 4>  mUnkb153ae;
    // NOLINTEND

public:
    // prevent constructor by default
    NearestAttackableTargetGoal& operator=(NearestAttackableTargetGoal const&);
    NearestAttackableTargetGoal(NearestAttackableTargetGoal const&);
    NearestAttackableTargetGoal();

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
    MCAPI explicit NearestAttackableTargetGoal(::Mob& mob);

    MCAPI bool _isTargetInCooldown(::MobDescriptor const& descriptor) const;

    MCAPI bool _selectTarget();

    MCAPI bool isTargetVisible(::Mob const& mob, float maxDistance, float maxHeight) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
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

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI ::ActorUniqueID $_findTarget(::MobDescriptor const** outMobDescriptor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
