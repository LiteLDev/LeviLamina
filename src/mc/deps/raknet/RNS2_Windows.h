#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2_Berkley.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { enum class RNS2BindResult; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct RNS2_SendParameters; }
// clang-format on

namespace RakNet {

class RNS2_Windows : public ::RakNet::RNS2_Berkley {

public:
    // prevent constructor by default
    RNS2_Windows& operator=(RNS2_Windows const&) = delete;
    RNS2_Windows(RNS2_Windows const&)            = delete;
    RNS2_Windows()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Send\@RNS2_Windows\@RakNet\@\@UEAAHPEAURNS2_SendParameters\@2\@PEBDI\@Z
     */
    virtual int Send(struct RakNet::RNS2_SendParameters*, char const*, unsigned int);
    /**
     * @vftbl 3
     * @symbol ?Bind\@RNS2_Windows\@RakNet\@\@UEAA?AW4RNS2BindResult\@2\@PEAURNS2_BerkleyBindParameters\@2\@PEBDI\@Z
     */
    virtual enum class RakNet::RNS2BindResult
    Bind(struct RakNet::RNS2_BerkleyBindParameters*, char const*, unsigned int);
    // NOLINTEND
};

}; // namespace RakNet
