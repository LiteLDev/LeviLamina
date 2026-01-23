#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
