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
    MCNAPI ~ClientAssertion();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
