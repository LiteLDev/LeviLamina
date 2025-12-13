#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
// clang-format on

struct TickingSystemRegistrationToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ITickingSystem>> mToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~TickingSystemRegistrationToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
