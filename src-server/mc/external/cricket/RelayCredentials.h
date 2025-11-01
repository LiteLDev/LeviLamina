#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct RelayCredentials {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk59a224;
    ::ll::UntypedStorage<8, 32> mUnk66c32c;
    // NOLINTEND

public:
    // prevent constructor by default
    RelayCredentials& operator=(RelayCredentials const&);
    RelayCredentials(RelayCredentials const&);
    RelayCredentials();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RelayCredentials();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
