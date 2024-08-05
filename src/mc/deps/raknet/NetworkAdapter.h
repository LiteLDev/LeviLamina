#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NetworkAdapter {
public:
    // prevent constructor by default
    NetworkAdapter& operator=(NetworkAdapter const&);
    NetworkAdapter(NetworkAdapter const&);

public:
    // NOLINTBEGIN
    MCAPI uint GetNumberOfAddresses();

    MCAPI NetworkAdapter();

    // NOLINTEND
};

}; // namespace RakNet
