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

    MCNAPI void sendPayload(::ScriptDebuggerMessages::INetworkPayload&& payload);

    MCNAPI bool waitForPacket(::ScriptDebuggerMessages::ScriptDebuggerPacket& packetOut);
    // NOLINTEND
};
