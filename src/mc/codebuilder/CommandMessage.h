#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2a131d;
    ::ll::UntypedStorage<8, 16> mUnkef2646;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const&);
    CommandMessage(CommandMessage const&);
    CommandMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CommandMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
