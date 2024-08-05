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
    // prevent constructor by default
    SocketLayer& operator=(SocketLayer const&);
    SocketLayer(SocketLayer const&);
    SocketLayer();

public:
    // NOLINTBEGIN
    MCAPI static void GetMyAdapters(struct RakNet::NetworkAdapter* const adapters);

    MCAPI static class RakNet::RakString GetSubNetForSocketAndIp(class RakNet::RakString inIpString);

    MCAPI static void SetSocketOptions(uint64, bool, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::function<std::vector<std::string>()> mPlatformAdapterOverride;

    // NOLINTEND
};

}; // namespace RakNet
