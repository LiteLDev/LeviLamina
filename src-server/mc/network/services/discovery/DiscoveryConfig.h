#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct DiscoveryConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7faaa3;
    ::ll::UntypedStorage<4, 4> mUnk4680d8;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryConfig& operator=(DiscoveryConfig const&);
    DiscoveryConfig(DiscoveryConfig const&);
    DiscoveryConfig();

};

}
