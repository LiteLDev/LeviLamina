#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

namespace NetherNet::Realms {

struct NetworkID {
public:
    // member variables
    ::mce::UUID mValue;

public:
    std::strong_ordering operator<=>(NetworkID const& other) const = default;
};

} // namespace NetherNet::Realms
