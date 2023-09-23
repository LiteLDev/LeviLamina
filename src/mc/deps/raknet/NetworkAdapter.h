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
    // symbol: ?GetNumberOfAddresses@NetworkAdapter@RakNet@@QEAAIXZ
    MCAPI uint GetNumberOfAddresses();

    // symbol: ??0NetworkAdapter@RakNet@@QEAA@XZ
    MCAPI NetworkAdapter();

    // NOLINTEND
};

}; // namespace RakNet
