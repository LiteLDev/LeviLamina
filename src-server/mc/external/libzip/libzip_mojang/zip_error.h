#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdd8e3e;
    ::ll::UntypedStorage<4, 4> mUnk2cccb0;
    ::ll::UntypedStorage<8, 8> mUnka94dce;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_error& operator=(zip_error const&);
    zip_error(zip_error const&);
    zip_error();

};
