#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct CommonHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkf09971;
    ::ll::UntypedStorage<2, 2> mUnked23ca;
    ::ll::UntypedStorage<4, 4> mUnkee0263;
    ::ll::UntypedStorage<4, 4> mUnkbefa99;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonHeader& operator=(CommonHeader const&);
    CommonHeader(CommonHeader const&);
    CommonHeader();
};

} // namespace dcsctp
