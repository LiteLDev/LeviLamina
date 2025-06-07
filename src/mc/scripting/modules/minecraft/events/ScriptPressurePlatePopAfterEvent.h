#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePopAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd262ca;
    ::ll::UntypedStorage<4, 4> mUnke83056;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPressurePlatePopAfterEvent& operator=(ScriptPressurePlatePopAfterEvent const&);
    ScriptPressurePlatePopAfterEvent(ScriptPressurePlatePopAfterEvent const&);
    ScriptPressurePlatePopAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
