#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ShadowBanList {
public:
    // prevent constructor by default
    ShadowBanList& operator=(ShadowBanList const&);
    ShadowBanList(ShadowBanList const&);
    ShadowBanList();

public:
    // NOLINTBEGIN
    MCAPI ShadowBanList(
        std::function<void(std::string const&)> addBanCallback,
        std::chrono::seconds                    banExpiryDuration,
        std::chrono::seconds                    appHandshakeGracePeriod
    );

    MCAPI ushort addBan(struct RakNet::SystemAddress const& addr, std::chrono::seconds time);

    // NOLINTEND
};

}; // namespace RakNet
