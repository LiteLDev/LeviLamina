#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ProbeClusterConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd94d4e;
    ::ll::UntypedStorage<8, 8> mUnk96ecee;
    ::ll::UntypedStorage<8, 8> mUnke50780;
    ::ll::UntypedStorage<4, 4> mUnk245ffc;
    ::ll::UntypedStorage<4, 4> mUnk5861a2;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbeClusterConfig& operator=(ProbeClusterConfig const&);
    ProbeClusterConfig(ProbeClusterConfig const&);
    ProbeClusterConfig();

};

}
