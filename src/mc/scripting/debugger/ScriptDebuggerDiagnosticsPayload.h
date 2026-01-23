#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDebuggerDiagnosticsPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk37237b;
    ::ll::UntypedStorage<8, 64> mUnkc3ae61;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerDiagnosticsPayload& operator=(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptDebuggerDiagnosticsPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
