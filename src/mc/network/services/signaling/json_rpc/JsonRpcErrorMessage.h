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
    ::ll::UntypedStorage<8, 32>  mUnk9a55c5;
    ::ll::UntypedStorage<8, 32>  mUnk80422a;
    ::ll::UntypedStorage<8, 224> mUnk76c886;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcErrorMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcErrorMessage(::JsonRpc::JsonRpcErrorMessage const&);

    MCNAPI ::JsonRpc::JsonRpcErrorMessage& operator=(::JsonRpc::JsonRpcErrorMessage&&);

    MCNAPI ::JsonRpc::JsonRpcErrorMessage& operator=(::JsonRpc::JsonRpcErrorMessage const&);

    MCNAPI ~JsonRpcErrorMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::JsonRpcErrorMessage const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
