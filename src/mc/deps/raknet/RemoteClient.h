#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteClient {
public:
    // prevent constructor by default
    RemoteClient& operator=(RemoteClient const&);
    RemoteClient(RemoteClient const&);

public:
    // NOLINTBEGIN
    MCAPI RemoteClient();

    MCAPI void SendOrBuffer(char const** data, uint const* lengths, int numParameters);

    MCAPI void SetActive(bool a);

    MCAPI ~RemoteClient();

    // NOLINTEND
};

}; // namespace RakNet
