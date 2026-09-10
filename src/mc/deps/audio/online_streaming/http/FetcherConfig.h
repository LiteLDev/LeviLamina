#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct FetcherConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcc34da;
    ::ll::UntypedStorage<4, 4> mUnke1d5a1;
    ::ll::UntypedStorage<4, 4> mUnk6f4843;
    ::ll::UntypedStorage<8, 8> mUnk4cce7b;
    ::ll::UntypedStorage<8, 8> mUnka3e58e;
    ::ll::UntypedStorage<8, 8> mUnk70fe78;
    // NOLINTEND

public:
    // prevent constructor by default
    FetcherConfig& operator=(FetcherConfig const&);
    FetcherConfig(FetcherConfig const&);
    FetcherConfig();
};

} // namespace Audio
