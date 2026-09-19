#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct ProtocolResponse : public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::ProtocolResponse> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk37da2a;
    ::ll::UntypedStorage<4, 4>  mUnk823392;
    ::ll::UntypedStorage<8, 24> mUnk38dffa;
    ::ll::UntypedStorage<8, 40> mUnkbfeaa2;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolResponse& operator=(ProtocolResponse const&);
    ProtocolResponse(ProtocolResponse const&);
    ProtocolResponse();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
