#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_buffer_fragment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb245a6;
    ::ll::UntypedStorage<8, 8> mUnk19573d;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_buffer_fragment& operator=(zip_buffer_fragment const&);
    zip_buffer_fragment(zip_buffer_fragment const&);
    zip_buffer_fragment();
};
