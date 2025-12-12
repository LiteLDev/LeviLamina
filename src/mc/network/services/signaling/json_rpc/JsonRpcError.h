#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd02ce6;
    ::ll::UntypedStorage<8, 32> mUnkfeb3df;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcError& operator=(JsonRpcError const&);
    JsonRpcError(JsonRpcError const&);
    JsonRpcError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
