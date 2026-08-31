#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class IdentityAssertion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcc8e6a;
    ::ll::UntypedStorage<8, 32> mUnkeda113;
    ::ll::UntypedStorage<8, 32> mUnkb28683;
    ::ll::UntypedStorage<8, 32> mUnk84cde6;
    // NOLINTEND

public:
    // prevent constructor by default
    IdentityAssertion& operator=(IdentityAssertion const&);
    IdentityAssertion(IdentityAssertion const&);
    IdentityAssertion();
};

} // namespace NetherNet
