#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    EditorExtensionOptionalParameters(EditorExtensionOptionalParameters const&);
    EditorExtensionOptionalParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorExtensionOptionalParameters(::Editor::API::EditorExtensionOptionalParameters&&);

    MCNAPI ::Editor::API::EditorExtensionOptionalParameters&
    operator=(::Editor::API::EditorExtensionOptionalParameters const&);

    MCNAPI ::Editor::API::EditorExtensionOptionalParameters&
    operator=(::Editor::API::EditorExtensionOptionalParameters&&);

    MCNAPI ~EditorExtensionOptionalParameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
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
