#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ITickingSystem;
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
    MCNAPI ~TickingSystemRegistrationToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
