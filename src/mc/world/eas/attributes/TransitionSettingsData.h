#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct TransitionSettingsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb6cac1;
    ::ll::UntypedStorage<4, 4>  mUnkdc5e1e;
    ::ll::UntypedStorage<4, 4>  mUnk1feca9;
    ::ll::UntypedStorage<8, 32> mUnke5b081;
    // NOLINTEND

public:
    // prevent constructor by default
    TransitionSettingsData& operator=(TransitionSettingsData const&);
    TransitionSettingsData(TransitionSettingsData const&);
    TransitionSettingsData();
};

} // namespace EAS
