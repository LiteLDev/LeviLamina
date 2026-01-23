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

public:
    // prevent constructor by default
    ContextKeyBinding& operator=(ContextKeyBinding const&);
    ContextKeyBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ContextKeyBinding(::Editor::Input::ContextKeyBinding const&);

    MCNAPI_C ContextKeyBinding(
        ::Editor::Input::KeyBinding const&                                                                  binding,
        ::Editor::Input::BindingInfo const&                                                                 info,
        ::std::function<void(::Editor::Input::KeyBinding const&, ::Editor::Input::KeyBinding const&, bool)> modifiedFn
    );

    MCNAPI_C ~ContextKeyBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Editor::Input::ContextKeyBinding const&);

    MCNAPI_C void* $ctor(
        ::Editor::Input::KeyBinding const&                                                                  binding,
        ::Editor::Input::BindingInfo const&                                                                 info,
        ::std::function<void(::Editor::Input::KeyBinding const&, ::Editor::Input::KeyBinding const&, bool)> modifiedFn
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Editor::Input
