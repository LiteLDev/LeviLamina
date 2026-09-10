#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Rpc { struct RpcRejection; }
// clang-format on

namespace Editor::Rpc {

class RpcPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1b14d9;
    ::ll::UntypedStorage<1, 1>  mUnk45c640;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcPromise& operator=(RpcPromise const&);
    RpcPromise(RpcPromise const&);
    RpcPromise();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void reject(::std::string detail);
#endif
    // NOLINTEND
};

} // namespace Editor::Rpc
