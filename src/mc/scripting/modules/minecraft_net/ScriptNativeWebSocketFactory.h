#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCNAPI ~ScriptNativeWebSocketFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
