#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { struct DebuggeeResponse; }
// clang-format on

namespace ScriptDebuggerMessages {

struct ResponseEnvelope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkedfc5a;
    ::ll::UntypedStorage<4, 4>  mUnkce5e80;
    ::ll::UntypedStorage<1, 1>  mUnke89233;
    ::ll::UntypedStorage<8, 32> mUnk31cf1f;
    ::ll::UntypedStorage<8, 80> mUnka28c22;
    // NOLINTEND

public:
    // prevent constructor by default
    ResponseEnvelope& operator=(ResponseEnvelope const&);
    ResponseEnvelope(ResponseEnvelope const&);
    ResponseEnvelope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ResponseEnvelope(::ScriptDebuggerMessages::DebuggeeResponse&& debuggeeResponse);

    MCNAPI ~ResponseEnvelope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::DebuggeeResponse&& debuggeeResponse);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
