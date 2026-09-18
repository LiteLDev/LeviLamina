#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { class INetworkPayload; }
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
    MCNAPI void sendPayload(::ScriptDebuggerMessages::INetworkPayload&& payload);
    // NOLINTEND
};
