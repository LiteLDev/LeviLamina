#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { struct DebuggeeResponse; }
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
    MCNAPI void send(::std::string const& message);

    MCNAPI void sendDebuggeeResponse(::ScriptDebuggerMessages::DebuggeeResponse&& debuggeeResponse);
    // NOLINTEND
};
