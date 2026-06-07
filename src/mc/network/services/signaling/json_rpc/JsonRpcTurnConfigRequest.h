#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcTurnConfigRequest : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcTurnConfigRequest inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcTurnConfigRequest inner types define
    struct Params {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd4db13;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcTurnConfigRequest& operator=(JsonRpcTurnConfigRequest const&);
    JsonRpcTurnConfigRequest(JsonRpcTurnConfigRequest const&);
    JsonRpcTurnConfigRequest();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace JsonRpc
