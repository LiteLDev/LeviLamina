#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

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
    // member functions
    // NOLINTBEGIN
    MCAPI EditorScriptAPI(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::Editor::API::EditorScriptAPI& operator=(::Editor::API::EditorScriptAPI&&);

    MCAPI ~EditorScriptAPI();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::API::EditorScriptAPI> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::API
