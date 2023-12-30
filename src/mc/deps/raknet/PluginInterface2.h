#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
// clang-format on

namespace RakNet {

class PluginInterface2 {
public:
    // prevent constructor by default
    PluginInterface2& operator=(PluginInterface2 const&);
    PluginInterface2(PluginInterface2 const&);
    PluginInterface2();

public:
    // NOLINTBEGIN
    // symbol: ?SetRakPeerInterface@PluginInterface2@RakNet@@QEAAXPEAVRakPeerInterface@2@@Z
    MCAPI void SetRakPeerInterface(class RakNet::RakPeerInterface* ptr);

    // NOLINTEND
};

}; // namespace RakNet
