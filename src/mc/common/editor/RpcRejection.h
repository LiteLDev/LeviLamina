#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

struct RpcRejection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6f32d3;
    ::ll::UntypedStorage<8, 32> mUnk4c98ea;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcRejection& operator=(RpcRejection const&);
    RpcRejection(RpcRejection const&);
    RpcRejection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RpcRejection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Rpc
