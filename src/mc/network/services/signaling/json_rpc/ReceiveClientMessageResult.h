#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class ReceiveClientMessageResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk277787;
    ::ll::UntypedStorage<8, 32> mUnk655f88;
    ::ll::UntypedStorage<8, 32> mUnkdebc04;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiveClientMessageResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReceiveClientMessageResult(::JsonRpc::ReceiveClientMessageResult const&);

    MCNAPI ::JsonRpc::ReceiveClientMessageResult& operator=(::JsonRpc::ReceiveClientMessageResult&&);

    MCNAPI ::JsonRpc::ReceiveClientMessageResult& operator=(::JsonRpc::ReceiveClientMessageResult const&);

    MCNAPI ~ReceiveClientMessageResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::ReceiveClientMessageResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
