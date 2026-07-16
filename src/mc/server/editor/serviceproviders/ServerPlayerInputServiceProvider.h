#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MouseCursorIconType.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Input { class KeyBinding; }
namespace Editor::Input { class MouseBinding; }
namespace Editor::Input { struct BindingCategoryInfo; }
namespace Editor::Input { struct BindingInfo; }
// clang-format on

namespace Editor::Services {

class ServerPlayerInputServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayerInputServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void> registerKeyBinding(
        ::HashedString const&               contextId,
        ::HashedString const&               eventId,
        ::Editor::Input::KeyBinding const&  binding,
        ::Editor::Input::BindingInfo const& info
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    unregisterKeyBinding(::HashedString const& contextId, ::HashedString const& eventId) = 0;

    virtual ::Scripting::Result_deprecated<void> registerMouseBinding(
        ::HashedString const&                contextId,
        ::HashedString const&                eventId,
        ::Editor::Input::MouseBinding const& binding
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    unregisterMouseBinding(::HashedString const& contextId, ::HashedString const& eventId) = 0;

    virtual ::Scripting::Result_deprecated<void> updateKeyBindingProcessingState(
        ::HashedString const& contextId,
        ::HashedString const& bindingId,
        ::std::optional<int>  state
    ) = 0;

    virtual ::std::optional<int>
    getKeyBindingProcessingState(::HashedString const& contextId, ::HashedString const& bindingId) const = 0;

    virtual ::Scripting::Result_deprecated<void> setViewportFocus(bool focused) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setMouseIcon(::HashedString const& contextId, ::std::optional<::Editor::Input::MouseCursorIconType> icon) = 0;

    virtual ::Scripting::Result_deprecated<void>
    registerBindingCategory(::std::string const& id, ::std::string const& label, int order) = 0;

    virtual ::Scripting::Result_deprecated<void> unregisterBindingCategory(::std::string const& id) = 0;

    virtual ::std::optional<::Editor::Input::BindingCategoryInfo>
    tryGetBindingCategoryInfo(::std::string const& id) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
