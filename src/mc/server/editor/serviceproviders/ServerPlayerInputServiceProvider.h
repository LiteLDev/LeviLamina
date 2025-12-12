#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Input { class KeyBinding; }
namespace Editor::Input { class MouseBinding; }
namespace Editor::Input { struct BindingInfo; }
// clang-format on

namespace Editor::Services {

class ServerPlayerInputServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayerInputServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void> registerKeyBinding(
        ::HashedString const&,
        ::HashedString const&,
        ::Editor::Input::KeyBinding const&,
        ::Editor::Input::BindingInfo const&
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> unregisterKeyBinding(::HashedString const&, ::HashedString const&) = 0;

    virtual ::Scripting::Result_deprecated<void>
    registerMouseBinding(::HashedString const&, ::HashedString const&, ::Editor::Input::MouseBinding const&) = 0;

    virtual ::Scripting::Result_deprecated<void>
    unregisterMouseBinding(::HashedString const&, ::HashedString const&) = 0;

    virtual ::Scripting::Result_deprecated<void>
    updateKeyBindingProcessingState(::HashedString const&, ::HashedString const&, ::std::optional<int>) = 0;

    virtual ::std::optional<int> getKeyBindingProcessingState(::HashedString const&, ::HashedString const&) const = 0;

    virtual ::Scripting::Result_deprecated<void> setViewportFocus(bool isFocused) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
