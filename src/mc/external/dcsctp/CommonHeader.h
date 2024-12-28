#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct CommonHeader {
public:
    // prevent constructor by default
    CommonHeader& operator=(CommonHeader const&);
    CommonHeader(CommonHeader const&);
    CommonHeader();
};

} // namespace dcsctp
