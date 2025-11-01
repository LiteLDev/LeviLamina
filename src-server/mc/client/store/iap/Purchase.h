#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Purchase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnk38a7aa;
    ::ll::UntypedStorage<4, 4>   mUnk469027;
    ::ll::UntypedStorage<4, 4>   mUnk131835;
    // NOLINTEND

public:
    // prevent constructor by default
    Purchase& operator=(Purchase const&);
    Purchase(Purchase const&);
    Purchase();
};
