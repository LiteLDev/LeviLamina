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
    ::ll::UntypedStorage<8, 32> mUnk5afae3;
    ::ll::UntypedStorage<8, 32> mUnke30aea;
    ::ll::UntypedStorage<8, 32> mUnk6b6591;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiveClientMessageResult& operator=(ReceiveClientMessageResult const&);
    ReceiveClientMessageResult(ReceiveClientMessageResult const&);
    ReceiveClientMessageResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::JsonRpc::ReceiveClientMessageResult& operator=(::JsonRpc::ReceiveClientMessageResult&&);

    MCNAPI ~ReceiveClientMessageResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
