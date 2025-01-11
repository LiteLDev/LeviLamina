#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseOnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6175c8;
    ::ll::UntypedStorage<8, 32> mUnkcc8a75;
    ::ll::UntypedStorage<8, 40> mUnk49d84a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStopUseOnAfterEvent& operator=(ScriptItemStopUseOnAfterEvent const&);
    ScriptItemStopUseOnAfterEvent(ScriptItemStopUseOnAfterEvent const&);
    ScriptItemStopUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
