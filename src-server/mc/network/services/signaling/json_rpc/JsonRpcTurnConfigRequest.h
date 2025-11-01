#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

namespace JsonRpc {

class JsonRpcTurnConfigRequest : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcTurnConfigRequest inner types declare
    // clang-format off
    struct Params;
    // clang-format on
    
    // JsonRpcTurnConfigRequest inner types define
    struct Params {
    };
    
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
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcTurnConfigRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
