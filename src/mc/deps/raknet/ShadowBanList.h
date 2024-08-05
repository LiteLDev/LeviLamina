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
    MCAPI ShadowBanList(std::function<void(std::string const&)>, std::chrono::seconds, std::chrono::seconds);

    MCAPI ushort addBan(struct RakNet::SystemAddress const&, std::chrono::seconds);

    // NOLINTEND
};

}; // namespace RakNet
