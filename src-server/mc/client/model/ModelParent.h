#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModelParent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6db08;
    ::ll::UntypedStorage<8, 48> mUnk6f7b23;
    ::ll::UntypedStorage<8, 24> mUnkb28112;
    ::ll::UntypedStorage<1, 1>  mUnk6f3950;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelParent& operator=(ModelParent const&);
    ModelParent(ModelParent const&);
    ModelParent();
};
