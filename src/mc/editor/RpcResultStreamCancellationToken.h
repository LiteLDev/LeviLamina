#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

class RpcResultStreamCancellationToken {
public:
    // RpcResultStreamCancellationToken inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // RpcResultStreamCancellationToken inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkc0fb93;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5cd174;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResultStreamCancellationToken& operator=(RpcResultStreamCancellationToken const&);
    RpcResultStreamCancellationToken(RpcResultStreamCancellationToken const&);
    RpcResultStreamCancellationToken();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~RpcResultStreamCancellationToken();
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
