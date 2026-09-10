#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/ResponseEnvelope.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    DebuggeeResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggeeResponse(::ScriptDebuggerMessages::DebuggeeResponse const&);

    MCNAPI DebuggeeResponse(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::DebuggeeResponse const&);

    MCNAPI void* $ctor(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
