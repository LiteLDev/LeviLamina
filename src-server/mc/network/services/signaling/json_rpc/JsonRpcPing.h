#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

namespace JsonRpc {

class JsonRpcPing : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcPing inner types declare
    // clang-format off
    struct Params;
    // clang-format on
    
    // JsonRpcPing inner types define
    struct Params {
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk66558a;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcPing& operator=(JsonRpcPing const&);
    JsonRpcPing(JsonRpcPing const&);
    JsonRpcPing();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcPing();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
