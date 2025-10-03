#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptMessageReceiveEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptMessageReceiveEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke1af0d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageReceiveEventFilter& operator=(ScriptMessageReceiveEventFilter const&);
    ScriptMessageReceiveEventFilter(ScriptMessageReceiveEventFilter const&);
    ScriptMessageReceiveEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptMessageReceiveEventFilterData const& data);

    MCNAPI ~ScriptMessageReceiveEventFilter();
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
