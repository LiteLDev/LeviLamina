#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
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
    // ScriptNativeWebSocketFactory inner types declare
    // clang-format off
    struct PendingConnection;
    // clang-format on

    // ScriptNativeWebSocketFactory inner types define
    struct PendingConnection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnka62f13;
        ::ll::UntypedStorage<8, 32> mUnkb15dd5;
        ::ll::UntypedStorage<8, 32> mUnk1195c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingConnection& operator=(PendingConnection const&);
        PendingConnection(PendingConnection const&);
        PendingConnection();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf343ea;
    ::ll::UntypedStorage<8, 64> mUnk9afc93;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNativeWebSocketFactory& operator=(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void queueSocketConnection(
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

    MCNAPI ~ScriptNativeWebSocketFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
