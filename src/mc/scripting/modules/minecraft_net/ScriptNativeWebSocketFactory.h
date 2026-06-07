#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventCoordinator;
class TaskGroup;
namespace Bedrock::Http { class HeaderCollection; }
namespace ScriptModuleMinecraftNet { class ScriptInternalWebSocketError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocket; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClient; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketConnectionFailedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketLimitExceededError; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNativeWebSocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf343ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNativeWebSocketFactory& operator=(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptNativeWebSocketFactory(::ScriptDeferredEventCoordinator& eventCoordinator);

    MCNAPI ::Bedrock::Threading::Async<void> queueSocketConnection(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptWebSocketClient>& scriptSocket,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocket>                     socket,
        ::std::string const&                                                                     uri,
        ::Bedrock::Http::HeaderCollection                                                        headers,
        ::gsl::not_null<::TaskGroup*>                                                            taskGroup,
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptWebSocketClient>,
            ::ScriptModuleMinecraftNet::ScriptWebSocketConnectionFailedError,
            ::ScriptModuleMinecraftNet::ScriptInternalWebSocketError,
            ::ScriptModuleMinecraftNet::ScriptWebSocketLimitExceededError,
            ::ScriptModuleMinecraftNet::ScriptMalformedUriError,
            ::ScriptModuleMinecraftNet::ScriptTLSOnlyError,
            ::ScriptModuleMinecraftNet::ScriptUriNotAllowedError>& promise
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDeferredEventCoordinator& eventCoordinator);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
