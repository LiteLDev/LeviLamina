#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct HttpResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnka93091;
    ::ll::UntypedStorage<8, 16> mUnkd251d0;
    ::ll::UntypedStorage<8, 16> mUnkae12f3;
    ::ll::UntypedStorage<8, 64> mUnk63bd8f;
    ::ll::UntypedStorage<8, 32> mUnkec5d36;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpResponse& operator=(HttpResponse const&);
    HttpResponse(HttpResponse const&);
    HttpResponse();
};

} // namespace NetherNet
