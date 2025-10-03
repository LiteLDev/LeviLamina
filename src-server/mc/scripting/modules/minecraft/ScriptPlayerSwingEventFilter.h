#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptPlayerSwingEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerSwingEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkb2be3f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSwingEventFilter& operator=(ScriptPlayerSwingEventFilter const&);
    ScriptPlayerSwingEventFilter(ScriptPlayerSwingEventFilter const&);
    ScriptPlayerSwingEventFilter();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
