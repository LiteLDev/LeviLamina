#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class ActiveTransfer {
public:
    // prevent constructor by default
    ActiveTransfer& operator=(ActiveTransfer const&);
    ActiveTransfer(ActiveTransfer const&);
    ActiveTransfer();

public:
    // NOLINTBEGIN
    // symbol: ?onAckReceived@ActiveTransfer@Server@ClientBlobCache@@QEAAX_K@Z
    MCAPI void onAckReceived(uint64 acked);

    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
