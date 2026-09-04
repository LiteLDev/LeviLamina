#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ControlOption;
class FloatControlOption;
class PointControlOption;
// clang-format on

class ControlConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                               mConfigId;
    ::ll::TypedStorage<4, 4, uint>                                               mConfigCategory;
    ::ll::TypedStorage<4, 4, uint>                                               mConfigGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PointControlOption>>            mPosition;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FloatControlOption>>            mScale;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ControlOption>>> mSubOptions;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                               mOverlapping;
    ::ll::TypedStorage<1, 1, bool>                                               mActive;
    ::ll::TypedStorage<4, 4, float>                                              mBaseWidth;
    ::ll::TypedStorage<4, 4, float>                                              mBaseHeight;
    ::ll::TypedStorage<4, 4, float>                                              mAspectRatio;
    ::ll::TypedStorage<1, 1, bool>                                               mKeepAspectRatio;
    ::ll::TypedStorage<4, 4, float>                                              mInitialDx;
    ::ll::TypedStorage<4, 4, float>                                              mInitialDy;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ControlConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
