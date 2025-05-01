#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

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
    // vIndex: 0
    virtual ~ServerPlayerInputServiceProvider() = default;

    // vIndex: 1
    virtual ::Scripting::Result<void>
    registerKeyBinding(::HashedString const&, ::HashedString const&, ::Editor::Input::KeyBinding const&, ::Editor::Input::BindingInfo const&) = 0;

    // vIndex: 2
    virtual ::Scripting::Result<void> unregisterKeyBinding(::HashedString const&, ::HashedString const&) = 0;

    // vIndex: 3
    virtual ::Scripting::Result<void>
    registerMouseBinding(::HashedString const&, ::HashedString const&, ::Editor::Input::MouseBinding const&) = 0;

    // vIndex: 4
    virtual ::Scripting::Result<void> unregisterMouseBinding(::HashedString const&, ::HashedString const&) = 0;

    // vIndex: 5
    virtual ::Scripting::Result<void>
    updateKeyBindingProcessingState(::HashedString const&, ::HashedString const&, ::std::optional<int>) = 0;

    // vIndex: 6
    virtual ::std::optional<int> getKeyBindingProcessingState(::HashedString const&, ::HashedString const&) const = 0;

    // vIndex: 7
    virtual ::Scripting::Result<void> setViewportFocus(bool) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
