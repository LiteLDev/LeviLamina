#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class PacketSocketFactory {
public:
    // prevent constructor by default
    PacketSocketFactory& operator=(PacketSocketFactory const&);
    PacketSocketFactory(PacketSocketFactory const&);
    PacketSocketFactory();
};

}; // namespace rtc
