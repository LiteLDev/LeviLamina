#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
// clang-format on

class ICommandDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICommandDispatcher();

    virtual int performCommand(::CommandOrigin const& origin, ::Command& command) = 0;
    // NOLINTEND
};
