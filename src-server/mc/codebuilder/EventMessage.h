#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EventMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a26d4;
    ::ll::UntypedStorage<8, 16> mUnke430fe;
    // NOLINTEND

public:
    // prevent constructor by default
    EventMessage& operator=(EventMessage const&);
    EventMessage(EventMessage const&);
    EventMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EventMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
