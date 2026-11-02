#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    ProtocolResponse(ProtocolResponse const&);
    ProtocolResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProtocolResponse() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::ProtocolResponse& operator=(::ScriptDebuggerMessages::ProtocolResponse const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
