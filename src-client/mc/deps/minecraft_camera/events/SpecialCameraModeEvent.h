#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpecialCameraModeEvent {
public:
    // SpecialCameraModeEvent inner types define
    enum class SpecialCameraMode : int {
        Invalid      = 0,
        TripodCamera = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpecialCameraModeEvent::SpecialCameraMode> mMode;
    ::ll::TypedStorage<1, 1, bool>                                        mEnable;
    // NOLINTEND
};
