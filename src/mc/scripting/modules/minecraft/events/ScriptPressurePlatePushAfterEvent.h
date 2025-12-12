#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePushAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk978b7b;
    ::ll::UntypedStorage<4, 4>  mUnk3311c0;
    ::ll::UntypedStorage<8, 32> mUnkaed99c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPressurePlatePushAfterEvent& operator=(ScriptPressurePlatePushAfterEvent const&);
    ScriptPressurePlatePushAfterEvent(ScriptPressurePlatePushAfterEvent const&);
    ScriptPressurePlatePushAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
