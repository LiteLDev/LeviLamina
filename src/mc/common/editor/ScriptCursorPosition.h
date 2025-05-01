#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptCursorPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkbfdcff;
    ::ll::UntypedStorage<1, 1>  mUnk55ad48;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorPosition& operator=(ScriptCursorPosition const&);
    ScriptCursorPosition(ScriptCursorPosition const&);
    ScriptCursorPosition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptCursorPosition> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
