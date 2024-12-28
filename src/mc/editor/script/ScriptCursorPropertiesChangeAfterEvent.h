#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptCursorPropertiesChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 96> mUnk1d3d8d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorPropertiesChangeAfterEvent& operator=(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
