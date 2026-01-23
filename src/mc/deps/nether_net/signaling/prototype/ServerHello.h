#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class ServerHello {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk42d537;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerHello& operator=(ServerHello const&);
    ServerHello(ServerHello const&);
    ServerHello();
};

} // namespace NetherNet
