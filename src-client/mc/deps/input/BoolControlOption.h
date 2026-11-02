#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ControlOption.h"

class BoolControlOption : public ::ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>> mBoolSetter;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>     mBoolGetter;
    // NOLINTEND
};
