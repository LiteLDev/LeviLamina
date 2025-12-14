#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ControlOption.h"

class FloatControlOption : public ::ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>> mFloatSetter;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>     mFloatGetter;
    ::ll::TypedStorage<4, 4, float>                         mMinValue;
    ::ll::TypedStorage<4, 4, float>                         mMaxValue;
    ::ll::TypedStorage<4, 4, float>                         mDefaultValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatControlOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FloatControlOption(
        uint                         controlOptionId,
        ::std::function<void(float)> floatSetter,
        ::std::function<float()>     floatGetter,
        float                        minValue,
        float                        maxValue,
        float                        defaultValue
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                         controlOptionId,
        ::std::function<void(float)> floatSetter,
        ::std::function<float()>     floatGetter,
        float                        minValue,
        float                        maxValue,
        float                        defaultValue
    );
    // NOLINTEND
};
