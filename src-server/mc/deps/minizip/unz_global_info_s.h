#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_global_info_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3e4333;
    ::ll::UntypedStorage<4, 4> mUnk7dd069;
    // NOLINTEND

public:
    // prevent constructor by default
    unz_global_info_s& operator=(unz_global_info_s const&);
    unz_global_info_s(unz_global_info_s const&);
    unz_global_info_s();

};
