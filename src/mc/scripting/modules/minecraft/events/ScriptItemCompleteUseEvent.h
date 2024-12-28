#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5ba2ff;
    ::ll::UntypedStorage<8, 32> mUnk775e66;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCompleteUseEvent& operator=(ScriptItemCompleteUseEvent const&);
    ScriptItemCompleteUseEvent(ScriptItemCompleteUseEvent const&);
    ScriptItemCompleteUseEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemCompleteUseEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
