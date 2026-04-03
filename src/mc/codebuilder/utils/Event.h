#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::CodeBuilder {

struct Event {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk69bce5;
    ::ll::UntypedStorage<8, 16> mUnkd987ee;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Event();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Util::CodeBuilder
