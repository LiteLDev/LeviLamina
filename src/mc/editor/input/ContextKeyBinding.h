#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Input { class KeyBinding; }
namespace Editor::Input { struct BindingInfo; }
// clang-format on

namespace Editor::Input {

class ContextKeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnkd120e1;
    ::ll::UntypedStorage<4, 16>  mUnkca57b8;
    ::ll::UntypedStorage<8, 128> mUnk8ba699;
    ::ll::UntypedStorage<8, 64>  mUnk176fe1;
    ::ll::UntypedStorage<4, 8>   mUnkcf3b82;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ContextKeyBinding& operator=(ContextKeyBinding const&);
    ContextKeyBinding(ContextKeyBinding const&);
    ContextKeyBinding();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContextKeyBinding& operator=(ContextKeyBinding const&);
    ContextKeyBinding();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ContextKeyBinding(::Editor::Input::ContextKeyBinding const&);

    MCNAPI ContextKeyBinding(
        ::Editor::Input::KeyBinding const&                                                                  binding,
        ::Editor::Input::BindingInfo const&                                                                 info,
        ::std::function<void(::Editor::Input::KeyBinding const&, ::Editor::Input::KeyBinding const&, bool)> modifiedFn
    );

    MCNAPI ~ContextKeyBinding();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Editor::Input::ContextKeyBinding const&);

    MCNAPI void* $ctor(
        ::Editor::Input::KeyBinding const&                                                                  binding,
        ::Editor::Input::BindingInfo const&                                                                 info,
        ::std::function<void(::Editor::Input::KeyBinding const&, ::Editor::Input::KeyBinding const&, bool)> modifiedFn
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Input
