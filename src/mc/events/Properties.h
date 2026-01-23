#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Properties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2f3c59;
    // NOLINTEND

public:
    // prevent constructor by default
    Properties& operator=(Properties const&);
    Properties(Properties const&);
    Properties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Properties();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
