#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakString; }
namespace RakNet { struct NetworkAdapter; }
// clang-format on

namespace RakNet {

class SocketLayer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void GetMyAdapters(::RakNet::NetworkAdapter* const adapters);

    MCNAPI static ::RakNet::RakString GetSubNetForSocketAndIp(::RakNet::RakString inIpString);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::function<::std::vector<::std::string>()>& mPlatformAdapterOverride();
    // NOLINTEND
};

} // namespace RakNet
