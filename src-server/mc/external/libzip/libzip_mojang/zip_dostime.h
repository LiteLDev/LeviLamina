#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_dostime {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk25cd67;
    ::ll::UntypedStorage<2, 2> mUnk725f7c;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_dostime& operator=(zip_dostime const&);
    zip_dostime(zip_dostime const&);
    zip_dostime();

};
