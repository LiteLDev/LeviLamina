#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiscoveryConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkeb1a26;
    ::ll::UntypedStorage<4, 4> mUnk88d66f;
    ::ll::UntypedStorage<4, 4> mUnk810403;
    ::ll::UntypedStorage<4, 4> mUnk3a36fb;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryConfig& operator=(DiscoveryConfig const&);
    DiscoveryConfig(DiscoveryConfig const&);
    DiscoveryConfig();
};
