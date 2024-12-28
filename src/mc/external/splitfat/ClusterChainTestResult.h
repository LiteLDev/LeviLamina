#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct ClusterChainTestResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke809da;
    ::ll::UntypedStorage<4, 4>  mUnk799107;
    ::ll::UntypedStorage<4, 12> mUnkf543db;
    // NOLINTEND

public:
    // prevent constructor by default
    ClusterChainTestResult& operator=(ClusterChainTestResult const&);
    ClusterChainTestResult(ClusterChainTestResult const&);
    ClusterChainTestResult();
};

} // namespace SFAT
