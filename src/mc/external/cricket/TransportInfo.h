#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkccf541;
    ::ll::UntypedStorage<8, 104> mUnk943e07;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportInfo& operator=(TransportInfo const&);
    TransportInfo(TransportInfo const&);
    TransportInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TransportInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
