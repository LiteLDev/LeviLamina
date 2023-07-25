#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NetworkAdapter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_NETWORKADAPTER
public:
    NetworkAdapter& operator=(NetworkAdapter const&) = delete;
    NetworkAdapter(NetworkAdapter const&)            = delete;
    NetworkAdapter()                                 = delete;
#endif

public:
    /**
     * @symbol ?GetNumberOfAddresses\@NetworkAdapter\@RakNet\@\@QEAAIXZ
     */
    MCAPI unsigned int GetNumberOfAddresses();
};

}; // namespace RakNet
