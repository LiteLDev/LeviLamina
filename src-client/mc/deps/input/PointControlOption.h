#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ControlOption.h"

class PointControlOption : public ::ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>> mXSetter;
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>> mYSetter;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>     mXGetter;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>     mYGetter;
    ::ll::TypedStorage<4, 4, float>                         mDefaultX;
    ::ll::TypedStorage<4, 4, float>                         mDefaultY;
    // NOLINTEND

public:
    // prevent constructor by default
    PointControlOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PointControlOption(
        uint                         controlOptionId,
        ::std::function<void(float)> xSetter,
        ::std::function<void(float)> ySetter,
        ::std::function<float()>     xGetter,
        ::std::function<float()>     yGetter,
        float                        defaultX,
        float                        defaultY
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                         controlOptionId,
        ::std::function<void(float)> xSetter,
        ::std::function<void(float)> ySetter,
        ::std::function<float()>     xGetter,
        ::std::function<float()>     yGetter,
        float                        defaultX,
        float                        defaultY
    );
    // NOLINTEND
};
