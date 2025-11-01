#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8adccf;
    ::ll::UntypedStorage<8, 32> mUnkeef053;
    ::ll::UntypedStorage<8, 8> mUnk6928ca;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRequest& operator=(CommandRequest const&);
    CommandRequest(CommandRequest const&);
    CommandRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommandRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
