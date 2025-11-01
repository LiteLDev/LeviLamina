#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInputEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInputEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnked4dfa;
    ::ll::UntypedStorage<4, 8> mUnke8f7ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputEventFilter(ScriptInputEventFilter const&);
    ScriptInputEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilter& operator=(::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilter const&);

    MCNAPI ~ScriptInputEventFilter();
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

}
