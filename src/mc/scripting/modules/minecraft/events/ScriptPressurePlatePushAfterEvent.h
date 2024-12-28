#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
