#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProductInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e76f3;
    ::ll::UntypedStorage<8, 32> mUnk440674;
    ::ll::UntypedStorage<8, 32> mUnk7606b8;
    ::ll::UntypedStorage<8, 32> mUnk5edaf9;
    ::ll::UntypedStorage<8, 32> mUnk27e588;
    // NOLINTEND

public:
    // prevent constructor by default
    ProductInfo& operator=(ProductInfo const&);
    ProductInfo(ProductInfo const&);
    ProductInfo();
};
