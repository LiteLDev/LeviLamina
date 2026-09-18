#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

struct RpcResultStreamPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk19bc71;
    ::ll::UntypedStorage<8, 24> mUnk86275a;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResultStreamPayload& operator=(RpcResultStreamPayload const&);
    RpcResultStreamPayload(RpcResultStreamPayload const&);
    RpcResultStreamPayload();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~RpcResultStreamPayload();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Rpc
