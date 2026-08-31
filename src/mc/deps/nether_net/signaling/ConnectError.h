#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class ConnectError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7df1f2;
    ::ll::UntypedStorage<4, 4> mUnkcb94fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectError& operator=(ConnectError const&);
    ConnectError(ConnectError const&);
    ConnectError();
};

} // namespace NetherNet
