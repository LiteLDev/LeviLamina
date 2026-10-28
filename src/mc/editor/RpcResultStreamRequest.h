#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

struct RpcResultStreamRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk35b9bf;
    ::ll::UntypedStorage<4, 4> mUnkeae897;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResultStreamRequest& operator=(RpcResultStreamRequest const&);
    RpcResultStreamRequest(RpcResultStreamRequest const&);
    RpcResultStreamRequest();
};

} // namespace Editor::Rpc
