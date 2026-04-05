#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct ClientAssertion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8ebb41;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientAssertion& operator=(ClientAssertion const&);
    ClientAssertion(ClientAssertion const&);
    ClientAssertion();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ~ClientAssertion();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Services
