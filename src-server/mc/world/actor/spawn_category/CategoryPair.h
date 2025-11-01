#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SpawnCategory {

struct CategoryPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk82e096;
    ::ll::UntypedStorage<4, 4> mUnk212dc8;
    // NOLINTEND

public:
    // prevent constructor by default
    CategoryPair& operator=(CategoryPair const&);
    CategoryPair(CategoryPair const&);
    CategoryPair();

};

}
