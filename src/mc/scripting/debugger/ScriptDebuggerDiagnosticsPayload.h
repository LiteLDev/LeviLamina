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
    ::ll::UntypedStorage<8, 64> mUnk31a89d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerDiagnosticsPayload& operator=(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload(ScriptDebuggerDiagnosticsPayload const&);
    ScriptDebuggerDiagnosticsPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptDebuggerDiagnosticsPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
