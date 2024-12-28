#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class PacketObserver {
public:
    // prevent constructor by default
    PacketObserver& operator=(PacketObserver const&);
    PacketObserver(PacketObserver const&);
    PacketObserver();
};

} // namespace dcsctp
