#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct NoiseTransitionSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd62c4c;
    ::ll::UntypedStorage<4, 4>  mUnkb4a2ac;
    ::ll::UntypedStorage<4, 4>  mUnk63e462;
    ::ll::UntypedStorage<4, 4>  mUnk9498ff;
    ::ll::UntypedStorage<4, 8>  mUnke60c77;
    ::ll::UntypedStorage<8, 32> mUnk607f0c;
    ::ll::UntypedStorage<8, 32> mUnkf7a875;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseTransitionSettings& operator=(NoiseTransitionSettings const&);
    NoiseTransitionSettings(NoiseTransitionSettings const&);
    NoiseTransitionSettings();
};

} // namespace EAS
