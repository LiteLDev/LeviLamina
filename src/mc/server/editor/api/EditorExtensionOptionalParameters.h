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
    ::ll::UntypedStorage<8, 40> mUnk3816b3;
    ::ll::UntypedStorage<8, 40> mUnk71e73b;
    ::ll::UntypedStorage<8, 40> mUnk70a3e8;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExtensionOptionalParameters& operator=(EditorExtensionOptionalParameters const&);
    EditorExtensionOptionalParameters(EditorExtensionOptionalParameters const&);
    EditorExtensionOptionalParameters();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND
};

} // namespace Editor::API
