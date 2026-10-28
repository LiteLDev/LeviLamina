#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct StartProfilerMessage
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::StartProfilerMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5a6de8;
    ::ll::UntypedStorage<8, 16> mUnk2de747;
    // NOLINTEND

public:
    // prevent constructor by default
    StartProfilerMessage& operator=(StartProfilerMessage const&);
    StartProfilerMessage(StartProfilerMessage const&);
    StartProfilerMessage();

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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
