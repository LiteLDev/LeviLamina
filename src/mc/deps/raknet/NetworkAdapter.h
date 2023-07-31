#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NetworkAdapter {

public:
    // prevent constructor by default
    NetworkAdapter& operator=(NetworkAdapter const&) = delete;
    NetworkAdapter(NetworkAdapter const&)            = delete;
    NetworkAdapter()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?GetNumberOfAddresses\@NetworkAdapter\@RakNet\@\@QEAAIXZ
     */
    MCAPI unsigned int GetNumberOfAddresses();
    // NOLINTEND
};

}; // namespace RakNet
