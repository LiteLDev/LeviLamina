#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::API {

struct EditorExtensionOptionalParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk513b35;
    ::ll::UntypedStorage<8, 40> mUnkcfc7ef;
    ::ll::UntypedStorage<8, 40> mUnk4d9404;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExtensionOptionalParameters& operator=(EditorExtensionOptionalParameters const&);
    EditorExtensionOptionalParameters(EditorExtensionOptionalParameters const&);
    EditorExtensionOptionalParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorExtensionOptionalParameters(::Editor::API::EditorExtensionOptionalParameters&&);

    MCNAPI ::Editor::API::EditorExtensionOptionalParameters&
    operator=(::Editor::API::EditorExtensionOptionalParameters&&);

    MCNAPI ~EditorExtensionOptionalParameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::API::EditorExtensionOptionalParameters>
    bindInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::API::EditorExtensionOptionalParameters&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::API
