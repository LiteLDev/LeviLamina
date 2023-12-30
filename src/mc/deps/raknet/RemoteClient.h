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
    // symbol: ??0RemoteClient@RakNet@@QEAA@XZ
    MCAPI RemoteClient();

    // symbol: ?SendOrBuffer@RemoteClient@RakNet@@QEAAXPEAPEBDPEBIH@Z
    MCAPI void SendOrBuffer(char const** data, uint const* lengths, int numParameters);

    // symbol: ?SetActive@RemoteClient@RakNet@@QEAAX_N@Z
    MCAPI void SetActive(bool a);

    // symbol: ??1RemoteClient@RakNet@@QEAA@XZ
    MCAPI ~RemoteClient();

    // NOLINTEND
};

}; // namespace RakNet
