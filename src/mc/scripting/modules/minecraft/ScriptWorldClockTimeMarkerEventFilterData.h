#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptWorldClockTimeMarkerEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::WorldClock*>> mClock;
    ::ll::TypedStorage<8, 48, ::HashedString>                mTimeMarkerName;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
