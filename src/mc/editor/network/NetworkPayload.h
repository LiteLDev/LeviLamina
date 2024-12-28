#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

template <typename T0>
class NetworkPayload {
public:
    // prevent constructor by default
    NetworkPayload& operator=(NetworkPayload const&);
    NetworkPayload(NetworkPayload const&);
    NetworkPayload();
};

} // namespace Editor::Network
