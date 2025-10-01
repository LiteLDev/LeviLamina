#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkca0875;
    ::ll::UntypedStorage<2, 2> mUnkfec20f;
    // NOLINTEND

public:
    // prevent constructor by default
    ct_data_s& operator=(ct_data_s const&);
    ct_data_s(ct_data_s const&);
    ct_data_s();
};
