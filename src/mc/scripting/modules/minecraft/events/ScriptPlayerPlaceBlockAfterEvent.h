#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3da92e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerPlaceBlockAfterEvent& operator=(ScriptPlayerPlaceBlockAfterEvent const&);
    ScriptPlayerPlaceBlockAfterEvent(ScriptPlayerPlaceBlockAfterEvent const&);
    ScriptPlayerPlaceBlockAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
