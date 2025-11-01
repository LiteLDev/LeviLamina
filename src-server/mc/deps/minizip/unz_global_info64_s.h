#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_global_info64_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27af63;
    ::ll::UntypedStorage<4, 4> mUnkf0c681;
    // NOLINTEND

public:
    // prevent constructor by default
    unz_global_info64_s& operator=(unz_global_info64_s const&);
    unz_global_info64_s(unz_global_info64_s const&);
    unz_global_info64_s();

};
