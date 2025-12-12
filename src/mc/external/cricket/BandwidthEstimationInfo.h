#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct BandwidthEstimationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb46ea1;
    ::ll::UntypedStorage<4, 4> mUnkeeb2f5;
    ::ll::UntypedStorage<4, 4> mUnk3fedfa;
    ::ll::UntypedStorage<4, 4> mUnk5e1630;
    ::ll::UntypedStorage<4, 4> mUnk90644d;
    ::ll::UntypedStorage<4, 4> mUnk8ad721;
    ::ll::UntypedStorage<8, 8> mUnkb50d8c;
    // NOLINTEND

public:
    // prevent constructor by default
    BandwidthEstimationInfo& operator=(BandwidthEstimationInfo const&);
    BandwidthEstimationInfo(BandwidthEstimationInfo const&);
    BandwidthEstimationInfo();
};

} // namespace cricket
