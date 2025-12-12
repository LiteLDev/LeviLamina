#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5003e0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerLeaveBeforeEvent& operator=(ScriptPlayerLeaveBeforeEvent const&);
    ScriptPlayerLeaveBeforeEvent(ScriptPlayerLeaveBeforeEvent const&);
    ScriptPlayerLeaveBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
