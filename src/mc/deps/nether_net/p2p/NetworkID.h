#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::P2P {

struct NetworkID {
public:
    // member variables
    uint64 mValue;

public:
    std::strong_ordering operator<=>(NetworkID const& other) const = default;
};

} // namespace NetherNet::P2P
