#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Property {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkac73a7;
    ::ll::UntypedStorage<8, 16> mUnka5b622;
    ::ll::UntypedStorage<1, 1> mUnk99a354;
    // NOLINTEND

public:
    // prevent constructor by default
    Property& operator=(Property const&);
    Property(Property const&);
    Property();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Property();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
