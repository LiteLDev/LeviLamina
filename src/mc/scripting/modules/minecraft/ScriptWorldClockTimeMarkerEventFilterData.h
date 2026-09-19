#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptWorldClockTimeMarkerEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldClock> const> mClock;
    ::ll::TypedStorage<8, 48, ::HashedString>                                    mTimeMarkerName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldClockTimeMarkerEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldClockTimeMarkerEventFilterData(
        ::Bedrock::NotNullNonOwnerPtr<::WorldClock> clock,
        ::HashedString const&                       timeMarkerName
    );

    MCAPI ~ScriptWorldClockTimeMarkerEventFilterData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Bedrock::NotNullNonOwnerPtr<::WorldClock> clock, ::HashedString const& timeMarkerName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
