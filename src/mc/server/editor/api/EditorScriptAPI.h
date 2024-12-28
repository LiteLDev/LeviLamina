#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::API {

class EditorScriptAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb8dbe7;
    ::ll::UntypedStorage<8, 32> mUnk4e6ce7;
    ::ll::UntypedStorage<8, 16> mUnk74450d;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorScriptAPI& operator=(EditorScriptAPI const&);
    EditorScriptAPI(EditorScriptAPI const&);
    EditorScriptAPI();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::API::EditorScriptAPI> bindScript();
    // NOLINTEND
};

} // namespace Editor::API
