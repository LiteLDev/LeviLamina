#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftDiscPressActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTrackSoundEventId;
    ::ll::TypedStorage<1, 1, uchar>          mNumCrafts;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
