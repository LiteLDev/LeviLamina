#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class ConsoleServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8c3396;
    ::ll::UntypedStorage<8, 16> mUnkd74dd2;
    ::ll::UntypedStorage<8, 2048> mUnkf58585;
    ::ll::UntypedStorage<8, 8> mUnk295953;
    // NOLINTEND

public:
    // prevent constructor by default
    ConsoleServer& operator=(ConsoleServer const&);
    ConsoleServer(ConsoleServer const&);
    ConsoleServer();

};

}
