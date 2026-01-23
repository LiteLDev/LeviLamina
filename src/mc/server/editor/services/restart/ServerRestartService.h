#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/server/editor/serviceproviders/ServerRestartServiceProvider.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScriptingWorldInitializeEvent;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class RestartServiceRequestRestartPayload; }
// clang-format on

namespace Editor::Services {

class ServerRestartService : public ::Editor::Services::IEditorService,
                             public ::Editor::Services::ServerRestartServiceProvider,
                             public ::EventListenerDispatcher<::LevelEventListener>,
                             public ::Editor::Services::PayloadStoreHelper {
public:
    // ServerRestartService inner types define
    enum class State : int {
        Listening       = 0,
        AwaitingRestart = 1,
        RestartComplete = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk527071;
    ::ll::UntypedStorage<4, 4>  mUnk71aeb9;
    ::ll::UntypedStorage<1, 1>  mUnkba8ed2;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerRestartService& operator=(ServerRestartService const&);
    ServerRestartService(ServerRestartService const&);
    ServerRestartService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent) /*override*/;

    virtual ~ServerRestartService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void requestReloadScriptsAndFunctions() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerRestartService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void
    _onRestartServiceRequestRestartPayload(::Editor::Network::RestartServiceRequestRestartPayload const& payload);

    MCNAPI void _onTick();

    MCNAPI bool _validateRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent);

    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $requestReloadScriptsAndFunctions();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForServerRestartServiceProvider();

    MCNAPI static void** $vftableForEventListenerDispatcher();
    // NOLINTEND
};

} // namespace Editor::Services
