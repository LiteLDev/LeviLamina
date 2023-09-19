#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientBlobCacheTrackingData {
public:
    // prevent constructor by default
    ClientBlobCacheTrackingData& operator=(ClientBlobCacheTrackingData const&);
    ClientBlobCacheTrackingData(ClientBlobCacheTrackingData const&);
    ClientBlobCacheTrackingData();
};
