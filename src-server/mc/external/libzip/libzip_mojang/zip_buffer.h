#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8a136d;
    ::ll::UntypedStorage<1, 1> mUnkeb3536;
    ::ll::UntypedStorage<8, 8> mUnk7a23a1;
    ::ll::UntypedStorage<8, 8> mUnk6cb68d;
    ::ll::UntypedStorage<8, 8> mUnk3fae67;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_buffer& operator=(zip_buffer const&);
    zip_buffer(zip_buffer const&);
    zip_buffer();
};
