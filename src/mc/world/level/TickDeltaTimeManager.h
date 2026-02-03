#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickDeltaTimeManagerProxy;
// clang-format on

class TickDeltaTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> mTickDeltaTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ITickDeltaTimeManagerProxy>> const>
        mTickDeltaTimeManagerProxy;
    // NOLINTEND
};
