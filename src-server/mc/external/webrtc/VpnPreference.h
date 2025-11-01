#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VpnPreference : int {
    KDefault = 0,
    KOnlyUseVpn = 1,
    KNeverUseVpn = 2,
    KPreferVpn = 3,
    KAvoidVpn = 4,
};

}
