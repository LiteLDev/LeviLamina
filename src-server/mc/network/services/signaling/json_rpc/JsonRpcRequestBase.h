#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcRequestBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk31b200;
    ::ll::UntypedStorage<8, 32> mUnk7f8263;
    ::ll::UntypedStorage<8, 32> mUnk1e68fc;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcRequestBase& operator=(JsonRpcRequestBase const&);
    JsonRpcRequestBase(JsonRpcRequestBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcRequestBase();

    MCNAPI ::JsonRpc::JsonRpcRequestBase& operator=(::JsonRpc::JsonRpcRequestBase&&);

    MCNAPI ~JsonRpcRequestBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
