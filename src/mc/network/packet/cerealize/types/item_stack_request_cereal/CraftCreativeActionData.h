#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftCreativeActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mCreativeItemNetId;
    ::ll::TypedStorage<1, 1, uchar> mNumCrafts;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
