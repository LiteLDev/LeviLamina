#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MouseActionCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Input {

class MouseBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk65c8a8;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseBinding& operator=(MouseBinding const&);
    MouseBinding(MouseBinding const&);
    MouseBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MouseBinding(::Editor::Input::MouseActionCategory mouseAction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Input::MouseActionCategory mouseAction);
    // NOLINTEND
};

} // namespace Editor::Input
