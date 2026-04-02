#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DismountMode.h"

// auto generated forward declare list
// clang-format off
struct SeatDescription;
// clang-format on

struct RideableComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                      mSeatCount;
    ::ll::TypedStorage<4, 4, int>                                                      mControllingSeat;
    ::ll::TypedStorage<1, 1, bool>                                                     mSkipInteractIfCrouching;
    ::ll::TypedStorage<8, 24, ::std::vector<::SeatDescription>>                        mSeats;
    ::ll::TypedStorage<8, 16, ::std::set<::HashedString, ::std::hash<::HashedString>>> mFamilyTypes;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mInteractText;
    ::ll::TypedStorage<1, 1, bool>                                                     mPullInEntities;
    ::ll::TypedStorage<1, 1, bool>                                                     mPassengerCanPick;
    ::ll::TypedStorage<4, 4, float>                                                    mPassengerMaxWidth;
    ::ll::TypedStorage<1, 1, ::DismountMode>                                           mDismountMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mOnRiderEnterEvent;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mOnRiderExitEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponentData& operator=(RideableComponentData const&);
    RideableComponentData(RideableComponentData const&);
    RideableComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RideableComponentData& operator=(::RideableComponentData&&);

    MCAPI ~RideableComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
