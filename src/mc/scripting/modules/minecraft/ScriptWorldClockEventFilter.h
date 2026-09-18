#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptWorldClockEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptWorldClockEventFilter {
public:
    // ScriptWorldClockEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptWorldClockEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mClockName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptWorldClockEventFilterData const& filterData);

    MCAPI ~ScriptWorldClockEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
