#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchEventResult.h"

// auto generated forward declare list
// clang-format off
struct TouchPoint;
// clang-format on

class TouchPointResults {
public:
    // TouchPointResults inner types define
    using TouchEventResults = ::std::vector<::std::pair<::TouchPoint, ::TouchEventResult>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::TouchPoint, ::TouchEventResult>>> _touchEventResults;
    // NOLINTEND
};
