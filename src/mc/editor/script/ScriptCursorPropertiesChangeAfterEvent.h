#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

struct ScriptCursorPropertiesChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 96> mUnk1d3d8d;
    ::ll::UntypedStorage<4, 20> mUnka51558;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorPropertiesChangeAfterEvent& operator=(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
