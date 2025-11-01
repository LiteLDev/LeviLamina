#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RegisteredCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk856121;
    ::ll::UntypedStorage<8, 8> mUnk5b4a84;
    ::ll::UntypedStorage<1, 1> mUnk1f6269;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredCommand& operator=(RegisteredCommand const&);
    RegisteredCommand(RegisteredCommand const&);
    RegisteredCommand();

};

}
