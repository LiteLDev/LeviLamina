#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptTickEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk87b2e4;
    ::ll::UntypedStorage<4, 4> mUnkb1f82f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickEvent& operator=(ScriptTickEvent const&);
    ScriptTickEvent(ScriptTickEvent const&);
    ScriptTickEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptTickEvent> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
