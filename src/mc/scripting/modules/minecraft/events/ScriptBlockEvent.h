#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf8d2e9;
    ::ll::UntypedStorage<8, 32> mUnkaeee50;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockEvent& operator=(ScriptBlockEvent const&);
    ScriptBlockEvent(ScriptBlockEvent const&);
    ScriptBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptBlockEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockEvent> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
