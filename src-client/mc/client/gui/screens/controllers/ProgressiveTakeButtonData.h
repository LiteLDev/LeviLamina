#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ProgressiveTakeBarLocation.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/containers/SlotData.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

struct ProgressiveTakeButtonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SlotData>                                     mSlotData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientInstanceScreenModel>> mScreenModel;
    ::ll::TypedStorage<4, 4, int>                                             mHeldTime;
    ::ll::TypedStorage<4, 4, int>                                             mStartHeldTime;
    ::ll::TypedStorage<4, 4, int>                                             mLastTouchTime;
    ::ll::TypedStorage<4, 4, float>                                           mStartX;
    ::ll::TypedStorage<4, 4, float>                                           mStoredValue;
    ::ll::TypedStorage<4, 4, float>                                           mFinalPercent;
    ::ll::TypedStorage<1, 1, bool>                                            mHolding;
    ::ll::TypedStorage<1, 1, bool>                                            mFinalized;
    ::ll::TypedStorage<1, 1, bool>                                            mTimeProgress;
    ::ll::TypedStorage<4, 4, ::ProgressiveTakeBarLocation>                    mCurrentBarLocation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                          mBarOnScreenPosition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getTakeAmount(int stackSize) const;

    MCAPI void
    initialize(::std::string const& collectionName, int collectionIndex, ::ProgressiveTakeBarLocation displayLocation);

    MCAPI ~ProgressiveTakeButtonData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
