#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6e57c8;
    ::ll::UntypedStorage<8, 32> mUnka43c0c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseAfterEvent& operator=(ScriptItemUseAfterEvent const&);
    ScriptItemUseAfterEvent(ScriptItemUseAfterEvent const&);
    ScriptItemUseAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseAfterEvent> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
