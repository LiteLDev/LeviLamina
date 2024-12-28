#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MaterialTypeEnumHasher {
public:
    // prevent constructor by default
    MaterialTypeEnumHasher& operator=(MaterialTypeEnumHasher const&);
    MaterialTypeEnumHasher(MaterialTypeEnumHasher const&);
    MaterialTypeEnumHasher();
};
