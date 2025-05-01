#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInputModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfcaa3c;
    ::ll::UntypedStorage<4, 4>  mUnk1cb62c;
    ::ll::UntypedStorage<4, 4>  mUnk7e28de;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputModeChangeAfterEvent& operator=(ScriptPlayerInputModeChangeAfterEvent const&);
    ScriptPlayerInputModeChangeAfterEvent(ScriptPlayerInputModeChangeAfterEvent const&);
    ScriptPlayerInputModeChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
