#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcRequestBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3b1c48;
    ::ll::UntypedStorage<8, 32> mUnka984db;
    ::ll::UntypedStorage<8, 32> mUnkb26ed1;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcRequestBase(JsonRpcRequestBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcRequestBase();

    MCNAPI ::JsonRpc::JsonRpcRequestBase& operator=(::JsonRpc::JsonRpcRequestBase&&);

    MCNAPI ::JsonRpc::JsonRpcRequestBase& operator=(::JsonRpc::JsonRpcRequestBase const&);

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

} // namespace JsonRpc
