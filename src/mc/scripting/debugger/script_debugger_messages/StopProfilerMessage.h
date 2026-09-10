#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct StopProfilerMessage
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::StopProfilerMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8fc628;
    ::ll::UntypedStorage<8, 16> mUnkab148a;
    ::ll::UntypedStorage<8, 32> mUnk19887d;
    // NOLINTEND

public:
    // prevent constructor by default
    StopProfilerMessage& operator=(StopProfilerMessage const&);
    StopProfilerMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StopProfilerMessage(::ScriptDebuggerMessages::StopProfilerMessage const&);

    MCNAPI ::ScriptDebuggerMessages::StopProfilerMessage& operator=(::ScriptDebuggerMessages::StopProfilerMessage&&);
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::StopProfilerMessage const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
