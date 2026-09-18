#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
};

} // namespace Editor::API
