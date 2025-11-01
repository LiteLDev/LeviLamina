#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct AgentMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5dde42;
    ::ll::UntypedStorage<8, 32> mUnkf1e17b;
    ::ll::UntypedStorage<8, 16> mUnkb32a4b;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentMessage& operator=(AgentMessage const&);
    AgentMessage(AgentMessage const&);
    AgentMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AgentMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
