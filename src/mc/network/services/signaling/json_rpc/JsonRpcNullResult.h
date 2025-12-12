#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcNullResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk53a833;
    ::ll::UntypedStorage<8, 32> mUnk23a12f;
    ::ll::UntypedStorage<1, 1>  mUnk6f97cf;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcNullResult& operator=(JsonRpcNullResult const&);
    JsonRpcNullResult(JsonRpcNullResult const&);
    JsonRpcNullResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcNullResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
