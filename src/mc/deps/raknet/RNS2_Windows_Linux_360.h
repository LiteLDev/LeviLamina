#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2_SendParameters; }
// clang-format on

namespace RakNet {

class RNS2_Windows_Linux_360 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RNS2_WINDOWS_LINUX_360
public:
    RNS2_Windows_Linux_360& operator=(RNS2_Windows_Linux_360 const&) = delete;
    RNS2_Windows_Linux_360(RNS2_Windows_Linux_360 const&)            = delete;
    RNS2_Windows_Linux_360()                                         = delete;
#endif

public:
    // protected:
    /**
     * @symbol ?Send_Windows_Linux_360NoVDP\@RNS2_Windows_Linux_360\@RakNet\@\@KAHHPEAURNS2_SendParameters\@2\@PEBDI\@Z
     */
    MCAPI static int Send_Windows_Linux_360NoVDP(int, struct RakNet::RNS2_SendParameters*, char const*, unsigned int);

protected:
};

}; // namespace RakNet
