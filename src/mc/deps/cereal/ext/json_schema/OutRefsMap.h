#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct OutRefsMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbc2888;
    ::ll::UntypedStorage<4, 4>  mUnk12f1cf;
    // NOLINTEND

public:
    // prevent constructor by default
    OutRefsMap& operator=(OutRefsMap const&);
    OutRefsMap(OutRefsMap const&);
    OutRefsMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OutRefsMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
