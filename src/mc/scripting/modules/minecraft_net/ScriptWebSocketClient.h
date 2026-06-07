#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocket; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketNotConnectedError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketClient
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptWebSocketClient> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc5b3bc;
    ::ll::UntypedStorage<8, 16> mUnk446adc;
    ::ll::UntypedStorage<8, 32> mUnk2726ab;
    ::ll::UntypedStorage<4, 8>  mUnkbe282b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClient& operator=(ScriptWebSocketClient const&);
    ScriptWebSocketClient(ScriptWebSocketClient const&);
    ScriptWebSocketClient();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWebSocketClient(
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocket> socket,
        ::Scripting::WeakLifetimeScope&                                      scope,
        ::std::optional<uint> const&                                         configMaxBodyBytes
    );

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraftNet::ScriptWebSocketNotConnectedError> close();

    MCNAPI void postFlush();

    MCNAPI void preFlush();

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraftNet::ScriptWebSocketNotConnectedError,
        ::ScriptModuleMinecraftNet::ScriptRequestBodyTooLargeError>
    sendMessage(::std::string const& payload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocket> socket,
        ::Scripting::WeakLifetimeScope&                                      scope,
        ::std::optional<uint> const&                                         configMaxBodyBytes
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
