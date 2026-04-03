#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd02ce6;
    ::ll::UntypedStorage<8, 32> mUnk54cb95;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcError(JsonRpcError const&);
    JsonRpcError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcError(::JsonRpc::JsonRpcError&&);

    MCNAPI ::JsonRpc::JsonRpcError& operator=(::JsonRpc::JsonRpcError&&);

    MCNAPI ::JsonRpc::JsonRpcError& operator=(::JsonRpc::JsonRpcError const&);

    MCNAPI ~JsonRpcError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::JsonRpcError&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
