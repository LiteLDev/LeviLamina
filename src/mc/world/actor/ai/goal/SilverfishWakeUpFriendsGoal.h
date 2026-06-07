#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Silverfish;
// clang-format on

class SilverfishWakeUpFriendsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Silverfish&> mSilverfish;
    ::ll::TypedStorage<4, 4, int>           mLookForFriends;
    // NOLINTEND

public:
    // prevent constructor by default
    SilverfishWakeUpFriendsGoal& operator=(SilverfishWakeUpFriendsGoal const&);
    SilverfishWakeUpFriendsGoal(SilverfishWakeUpFriendsGoal const&);
    SilverfishWakeUpFriendsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SilverfishWakeUpFriendsGoal(::Silverfish& silverfish);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Silverfish& silverfish);
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
