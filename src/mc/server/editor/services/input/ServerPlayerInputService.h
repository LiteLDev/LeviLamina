#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/server/editor/serviceproviders/ServerPlayerInputServiceProvider.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Input { class KeyBinding; }
namespace Editor::Input { struct BindingInfo; }
// clang-format on

namespace Editor::Services {

class ServerPlayerInputService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::ServerPlayerInputServiceProvider {
public:
    // prevent constructor by default
    ServerPlayerInputService& operator=(ServerPlayerInputService const&);
    ServerPlayerInputService(ServerPlayerInputService const&);
    ServerPlayerInputService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayerInputService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> registerKeyBinding(
        ::HashedString const&               contextId,
        ::HashedString const&               eventId,
        ::Editor::Input::KeyBinding const&  binding,
        ::Editor::Input::BindingInfo const& info
    ) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void>
    unregisterKeyBinding(::HashedString const& contextId, ::HashedString const& eventId) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> setViewportFocus(bool focused) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result<void> $registerKeyBinding(
        ::HashedString const&               contextId,
        ::HashedString const&               eventId,
        ::Editor::Input::KeyBinding const&  binding,
        ::Editor::Input::BindingInfo const& info
    );

    MCAPI ::Scripting::Result<void>
    $unregisterKeyBinding(::HashedString const& contextId, ::HashedString const& eventId);

    MCAPI ::Scripting::Result<void> $setViewportFocus(bool focused);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForServerPlayerInputServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
