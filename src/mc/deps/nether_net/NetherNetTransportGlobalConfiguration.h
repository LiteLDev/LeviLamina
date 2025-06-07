#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct NetherNetTransportGlobalConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk62d29b;
    ::ll::UntypedStorage<2, 2> mUnk8efbd0;
    ::ll::UntypedStorage<2, 2> mUnk665795;
    ::ll::UntypedStorage<4, 4> mUnk6a9b19;
    ::ll::UntypedStorage<4, 8> mUnkd4f9ad;
    ::ll::UntypedStorage<4, 8> mUnkab4c2c;
    ::ll::UntypedStorage<4, 8> mUnkfa2468;
    ::ll::UntypedStorage<4, 8> mUnk8e9d66;
    ::ll::UntypedStorage<4, 4> mUnk22cd1b;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetTransportGlobalConfiguration& operator=(NetherNetTransportGlobalConfiguration const&);
    NetherNetTransportGlobalConfiguration(NetherNetTransportGlobalConfiguration const&);
    NetherNetTransportGlobalConfiguration();
};

} // namespace NetherNet
