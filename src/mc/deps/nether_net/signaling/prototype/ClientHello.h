#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class ClientHello {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5f766d;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientHello& operator=(ClientHello const&);
    ClientHello(ClientHello const&);
    ClientHello();
};

} // namespace NetherNet
