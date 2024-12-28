#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/Mode.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptEditorMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk94cdc0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorMode& operator=(ScriptEditorMode const&);
    ScriptEditorMode(ScriptEditorMode const&);
    ScriptEditorMode();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Editor::Mode> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
