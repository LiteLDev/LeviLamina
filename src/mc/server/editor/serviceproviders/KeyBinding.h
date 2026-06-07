#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/input/KeyInputType.h"
#include "mc/editor/input/Modifier.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Input {

class KeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3c280a;
    ::ll::UntypedStorage<4, 4> mUnk7fbff8;
    ::ll::UntypedStorage<4, 4> mUnk10f476;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyBinding& operator=(KeyBinding const&);
    KeyBinding(KeyBinding const&);
    KeyBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeyBinding(int key, ::Editor::Input::Modifier modifier, ::Editor::Input::KeyInputType inputType);

    MCNAPI bool isValid() const;

#ifdef LL_PLAT_C
    MCNAPI bool operator==(::Editor::Input::KeyBinding const&) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int key, ::Editor::Input::Modifier modifier, ::Editor::Input::KeyInputType inputType);
    // NOLINTEND
};

} // namespace Editor::Input
