#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct ItemNameDescriptorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mFullName;
    ::ll::TypedStorage<4, 4, int>            mAuxValue;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
