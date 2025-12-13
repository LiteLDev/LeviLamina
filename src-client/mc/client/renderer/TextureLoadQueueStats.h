#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct TextureLoadQueueStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3a3831;
    ::ll::UntypedStorage<8, 8>  mUnkafa38e;
    ::ll::UntypedStorage<8, 8>  mUnk5e1249;
    ::ll::UntypedStorage<8, 8>  mUnkc91554;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureLoadQueueStats& operator=(TextureLoadQueueStats const&);
    TextureLoadQueueStats(TextureLoadQueueStats const&);
    TextureLoadQueueStats();
};

} // namespace mce
