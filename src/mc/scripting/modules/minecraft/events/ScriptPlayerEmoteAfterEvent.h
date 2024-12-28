#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerEmoteAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd75600;
    ::ll::UntypedStorage<8, 32> mUnk646c8a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerEmoteAfterEvent& operator=(ScriptPlayerEmoteAfterEvent const&);
    ScriptPlayerEmoteAfterEvent(ScriptPlayerEmoteAfterEvent const&);
    ScriptPlayerEmoteAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
