#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemWithInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkabfef5;
    ::ll::UntypedStorage<8, 192> mUnkc4653d;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingSystemWithInfo& operator=(TickingSystemWithInfo const&);
    TickingSystemWithInfo(TickingSystemWithInfo const&);
    TickingSystemWithInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TickingSystemWithInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
