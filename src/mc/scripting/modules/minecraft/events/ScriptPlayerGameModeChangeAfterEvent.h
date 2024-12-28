#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9bd5b7;
    ::ll::UntypedStorage<4, 4>  mUnkec4eba;
    ::ll::UntypedStorage<4, 4>  mUnke5adc4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeAfterEvent& operator=(ScriptPlayerGameModeChangeAfterEvent const&);
    ScriptPlayerGameModeChangeAfterEvent(ScriptPlayerGameModeChangeAfterEvent const&);
    ScriptPlayerGameModeChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
