#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptSelectionEventAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka39389;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionEventAfterEvent& operator=(ScriptSelectionEventAfterEvent const&);
    ScriptSelectionEventAfterEvent(ScriptSelectionEventAfterEvent const&);
    ScriptSelectionEventAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSelectionEventAfterEvent> bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
