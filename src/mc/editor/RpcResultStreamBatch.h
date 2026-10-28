#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

struct RpcResultStreamBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5c2996;
    ::ll::UntypedStorage<4, 4>  mUnk671fee;
    ::ll::UntypedStorage<1, 1>  mUnkca0e32;
    ::ll::UntypedStorage<8, 24> mUnkbbc769;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResultStreamBatch& operator=(RpcResultStreamBatch const&);
    RpcResultStreamBatch(RpcResultStreamBatch const&);
    RpcResultStreamBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RpcResultStreamBatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Rpc
