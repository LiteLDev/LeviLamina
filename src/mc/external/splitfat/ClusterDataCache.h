#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct ClusterDataCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk97dea3;
    ::ll::UntypedStorage<8, 24> mUnkd2b097;
    ::ll::UntypedStorage<1, 1>  mUnk486bc5;
    // NOLINTEND

public:
    // prevent constructor by default
    ClusterDataCache& operator=(ClusterDataCache const&);
    ClusterDataCache(ClusterDataCache const&);
    ClusterDataCache();
};

} // namespace SFAT
