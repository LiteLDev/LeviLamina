#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/http/WebSocket.h"

namespace ScriptModuleMinecraftNet {

class ScriptNativeWebSocket : public ::Bedrock::Http::WebSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkd25108;
    ::ll::UntypedStorage<8, 24> mUnkc5aca1;
    ::ll::UntypedStorage<1, 1>  mUnkc75957;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNativeWebSocket& operator=(ScriptNativeWebSocket const&);
    ScriptNativeWebSocket(ScriptNativeWebSocket const&);
    ScriptNativeWebSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptNativeWebSocket() /*override*/ = default;

    virtual void onMessage(::std::string_view message) /*override*/;

    virtual void onClose(uint) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onMessage(::std::string_view message);

    MCNAPI void $onClose(uint);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
