#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

namespace Editor::ScriptModule {

class ScriptEditorConstants : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptEditorConstants> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk85e372;
    ::ll::UntypedStorage<8, 8>  mUnkb09688;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorConstants& operator=(ScriptEditorConstants const&);
    ScriptEditorConstants(ScriptEditorConstants const&);
    ScriptEditorConstants();
};

} // namespace Editor::ScriptModule
