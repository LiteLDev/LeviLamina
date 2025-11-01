#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_extra_field {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80da83;
    ::ll::UntypedStorage<4, 4> mUnk6034cb;
    ::ll::UntypedStorage<2, 2> mUnk969f91;
    ::ll::UntypedStorage<2, 2> mUnkd28338;
    ::ll::UntypedStorage<8, 8> mUnk37fd8a;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_extra_field& operator=(zip_extra_field const&);
    zip_extra_field(zip_extra_field const&);
    zip_extra_field();
};
