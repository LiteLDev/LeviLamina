#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StoreFilter {

struct Toggle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6c9dee;
    ::ll::UntypedStorage<8, 32> mUnk2c84a7;
    ::ll::UntypedStorage<4, 8>  mUnk61637f;
    ::ll::UntypedStorage<1, 1>  mUnk705201;
    ::ll::UntypedStorage<1, 1>  mUnk7ccff0;
    // NOLINTEND

public:
    // prevent constructor by default
    Toggle& operator=(Toggle const&);
    Toggle(Toggle const&);
    Toggle();
};

} // namespace StoreFilter
