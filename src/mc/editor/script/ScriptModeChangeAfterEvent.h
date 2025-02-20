#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka34d04;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModeChangeAfterEvent& operator=(ScriptModeChangeAfterEvent const&);
    ScriptModeChangeAfterEvent(ScriptModeChangeAfterEvent const&);
    ScriptModeChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptModeChangeAfterEvent> bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
