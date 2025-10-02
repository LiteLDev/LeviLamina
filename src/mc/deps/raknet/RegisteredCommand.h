#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RegisteredCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> command;
    ::ll::TypedStorage<8, 8, char const*> commandHelp;
    ::ll::TypedStorage<1, 1, uchar>       parameterCount;
    // NOLINTEND
};

} // namespace RakNet
