#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptWorldClockTimeMarkerEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptWorldClockTimeMarkerEventFilter {
public:
    // ScriptWorldClockTimeMarkerEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptWorldClockTimeMarkerEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mClockName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTimeMarkerName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldClockTimeMarkerEventFilter(ScriptWorldClockTimeMarkerEventFilter const&);
    ScriptWorldClockTimeMarkerEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptWorldClockTimeMarkerEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptWorldClockTimeMarkerEventFilter const&);

    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptWorldClockTimeMarkerEventFilterData const& filterData);

    MCNAPI ~ScriptWorldClockTimeMarkerEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
