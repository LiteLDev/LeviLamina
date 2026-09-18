#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/ResponseEnvelope.h"

namespace ScriptDebuggerMessages {

struct DebuggeeResponse
: public ::ScriptDebuggerMessages::ResponseEnvelope<::ScriptDebuggerMessages::DebuggeeResponse> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5c92d4;
    ::ll::UntypedStorage<1, 1>  mUnkeda63a;
    ::ll::UntypedStorage<8, 32> mUnk20fbb3;
    ::ll::UntypedStorage<8, 80> mUnk7ab5fc;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggeeResponse& operator=(DebuggeeResponse const&);
    DebuggeeResponse(DebuggeeResponse const&);
    DebuggeeResponse();
};

} // namespace ScriptDebuggerMessages
