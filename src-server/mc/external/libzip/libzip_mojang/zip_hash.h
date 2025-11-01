#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_hash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkde2573;
    ::ll::UntypedStorage<8, 8> mUnka14d16;
    ::ll::UntypedStorage<8, 8> mUnk6a46aa;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_hash& operator=(zip_hash const&);
    zip_hash(zip_hash const&);
    zip_hash();

};
