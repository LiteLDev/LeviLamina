#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { class INetworkPayload; }
namespace ScriptDebuggerMessages { struct ScriptDebuggerPacket; }
// clang-format on

class ScriptDebuggerProtocol {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk14b32c;
    ::ll::UntypedStorage<8, 24> mUnk6d668e;
    ::ll::UntypedStorage<8, 32> mUnk33a4d3;
    ::ll::UntypedStorage<8, 32> mUnk91caa3;
    ::ll::UntypedStorage<8, 8>  mUnk75f548;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerProtocol& operator=(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string _receive();

    MCNAPI void send(::std::string const& message);

    MCNAPI void sendPayload(::ScriptDebuggerMessages::INetworkPayload&& payload);

    MCNAPI bool tryReceive(::std::string& message);

    MCNAPI bool waitForPacket(::ScriptDebuggerMessages::ScriptDebuggerPacket& packetOut);

    MCNAPI ~ScriptDebuggerProtocol();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
