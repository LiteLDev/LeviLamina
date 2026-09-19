#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct TransitionSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkea364b;
    ::ll::UntypedStorage<4, 4>  mUnk59d314;
    ::ll::UntypedStorage<4, 4>  mUnkf6db7d;
    ::ll::UntypedStorage<8, 32> mUnkc8b707;
    // NOLINTEND

public:
    // prevent constructor by default
    TransitionSettings& operator=(TransitionSettings const&);
    TransitionSettings(TransitionSettings const&);
    TransitionSettings();
};

} // namespace EAS
