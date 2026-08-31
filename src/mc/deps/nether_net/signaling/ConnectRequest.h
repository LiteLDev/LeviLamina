#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class ConnectRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2efad2;
    ::ll::UntypedStorage<8, 32> mUnk95985f;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectRequest& operator=(ConnectRequest const&);
    ConnectRequest(ConnectRequest const&);
    ConnectRequest();
};

} // namespace NetherNet
