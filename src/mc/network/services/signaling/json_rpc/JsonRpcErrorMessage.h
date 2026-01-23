#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcErrorMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbd3983;
    ::ll::UntypedStorage<8, 32> mUnk828ad8;
    ::ll::UntypedStorage<8, 40> mUnk76c886;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcErrorMessage(JsonRpcErrorMessage const&);
    JsonRpcErrorMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::JsonRpc::JsonRpcErrorMessage& operator=(::JsonRpc::JsonRpcErrorMessage&&);

    MCNAPI ::JsonRpc::JsonRpcErrorMessage& operator=(::JsonRpc::JsonRpcErrorMessage const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace JsonRpc
