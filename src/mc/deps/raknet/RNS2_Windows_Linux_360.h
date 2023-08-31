#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2_SendParameters; }
// clang-format on

namespace RakNet {

class RNS2_Windows_Linux_360 {

public:
    // prevent constructor by default
    RNS2_Windows_Linux_360& operator=(RNS2_Windows_Linux_360 const&) = delete;
    RNS2_Windows_Linux_360(RNS2_Windows_Linux_360 const&)            = delete;
    RNS2_Windows_Linux_360()                                         = delete;

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?Send_Windows_Linux_360NoVDP\@RNS2_Windows_Linux_360\@RakNet\@\@KAHHPEAURNS2_SendParameters\@2\@PEBDI\@Z
     */
    MCAPI static int32_t
    Send_Windows_Linux_360NoVDP(int32_t, struct RakNet::RNS2_SendParameters*, char const*, uint32_t);
    // NOLINTEND
};

}; // namespace RakNet
