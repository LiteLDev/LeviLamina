#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MouseCursorIconType.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/serviceproviders/ServerPlayerInputServiceProvider.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Input { class KeyBinding; }
namespace Editor::Input { class MouseBinding; }
namespace Editor::Input { struct BindingCategoryInfo; }
namespace Editor::Input { struct BindingInfo; }
// clang-format on

namespace Editor::Services {

class ServerPlayerInputService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::ServerPlayerInputServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb22178;
    ::ll::UntypedStorage<8, 64> mUnke37ce3;
    ::ll::UntypedStorage<8, 64> mUnk7e6a99;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerInputService& operator=(ServerPlayerInputService const&);
    ServerPlayerInputService(ServerPlayerInputService const&);
    ServerPlayerInputService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayerInputService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> registerKeyBinding(
        ::HashedString const&               contextId,
        ::HashedString const&               eventId,
        ::Editor::Input::KeyBinding const&  binding,
        ::Editor::Input::BindingInfo const& info
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    unregisterKeyBinding(::HashedString const& contextId, ::HashedString const& eventId) /*override*/;

    virtual ::Scripting::Result_deprecated<void> registerMouseBinding(
        ::HashedString const&                contextId,
        ::HashedString const&                eventId,
        ::Editor::Input::MouseBinding const& binding
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    unregisterMouseBinding(::HashedString const& contextId, ::HashedString const& eventId) /*override*/;

    virtual ::Scripting::Result_deprecated<void> updateKeyBindingProcessingState(
        ::HashedString const& contextId,
        ::HashedString const& bindingId,
        ::std::optional<int>  state
    ) /*override*/;

    virtual ::std::optional<int>
    getKeyBindingProcessingState(::HashedString const& contextId, ::HashedString const& bindingId) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> setViewportFocus(bool focused) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    registerBindingCategory(::std::string const& id, ::std::string const& label, int order) /*override*/;

    virtual ::Scripting::Result_deprecated<void> unregisterBindingCategory(::std::string const& id) /*override*/;

    virtual ::std::optional<::Editor::Input::BindingCategoryInfo>
    tryGetBindingCategoryInfo(::std::string const& id) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> setMouseIcon(
        ::HashedString const&                                 contextId,
        ::std::optional<::Editor::Input::MouseCursorIconType> icon
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerPlayerInputService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $registerKeyBinding(
        ::HashedString const&               contextId,
        ::HashedString const&               eventId,
        ::Editor::Input::KeyBinding const&  binding,
        ::Editor::Input::BindingInfo const& info
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $unregisterKeyBinding(::HashedString const& contextId, ::HashedString const& eventId);

    MCNAPI ::Scripting::Result_deprecated<void> $registerMouseBinding(
        ::HashedString const&                contextId,
        ::HashedString const&                eventId,
        ::Editor::Input::MouseBinding const& binding
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $unregisterMouseBinding(::HashedString const& contextId, ::HashedString const& eventId);

    MCNAPI ::Scripting::Result_deprecated<void> $updateKeyBindingProcessingState(
        ::HashedString const& contextId,
        ::HashedString const& bindingId,
        ::std::optional<int>  state
    );

    MCNAPI ::std::optional<int>
    $getKeyBindingProcessingState(::HashedString const& contextId, ::HashedString const& bindingId) const;

    MCNAPI ::Scripting::Result_deprecated<void> $setViewportFocus(bool focused);

    MCNAPI ::Scripting::Result_deprecated<void>
    $registerBindingCategory(::std::string const& id, ::std::string const& label, int order);

    MCNAPI ::Scripting::Result_deprecated<void> $unregisterBindingCategory(::std::string const& id);

    MCNAPI ::std::optional<::Editor::Input::BindingCategoryInfo>
    $tryGetBindingCategoryInfo(::std::string const& id) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    $setMouseIcon(::HashedString const& contextId, ::std::optional<::Editor::Input::MouseCursorIconType> icon);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForServerPlayerInputServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
