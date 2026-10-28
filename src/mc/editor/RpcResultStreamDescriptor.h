#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

struct RpcResultStreamDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7e92b4;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResultStreamDescriptor& operator=(RpcResultStreamDescriptor const&);
    RpcResultStreamDescriptor(RpcResultStreamDescriptor const&);
    RpcResultStreamDescriptor();
};

} // namespace Editor::Rpc
