#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct ProtocolAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk675f33;
    ::ll::UntypedStorage<4, 4>  mUnk426311;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolAddress& operator=(ProtocolAddress const&);
    ProtocolAddress(ProtocolAddress const&);
    ProtocolAddress();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ProtocolAddress();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
