#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct ClientAssertion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbbe8f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientAssertion& operator=(ClientAssertion const&);
    ClientAssertion(ClientAssertion const&);
    ClientAssertion();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_S void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
