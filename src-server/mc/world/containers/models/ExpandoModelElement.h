#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExpandoModelElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkdfe4c8;
    ::ll::UntypedStorage<4, 4>   mUnkc9b0f5;
    ::ll::UntypedStorage<8, 32>  mUnk14079b;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpandoModelElement& operator=(ExpandoModelElement const&);
    ExpandoModelElement(ExpandoModelElement const&);
    ExpandoModelElement();
};
