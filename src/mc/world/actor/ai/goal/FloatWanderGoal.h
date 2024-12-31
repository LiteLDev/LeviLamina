#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class FloatWanderGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd0df39;
    ::ll::UntypedStorage<4, 12> mUnkdb2384;
    ::ll::UntypedStorage<4, 4>  mUnk928e58;
    ::ll::UntypedStorage<4, 4>  mUnkf72b2f;
    ::ll::UntypedStorage<4, 4>  mUnk32c4ee;
    ::ll::UntypedStorage<4, 4>  mUnk5a4da4;
    ::ll::UntypedStorage<1, 1>  mUnk50f53a;
    ::ll::UntypedStorage<1, 1>  mUnkee4c35;
    ::ll::UntypedStorage<4, 8>  mUnk67ce2e;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatWanderGoal& operator=(FloatWanderGoal const&);
    FloatWanderGoal(FloatWanderGoal const&);
    FloatWanderGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~FloatWanderGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canReach(::Vec3 const& targetPos, float dist);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
