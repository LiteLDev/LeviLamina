#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class ActiveTransfer {

public:
    // prevent constructor by default
    ActiveTransfer& operator=(ActiveTransfer const&) = delete;
    ActiveTransfer(ActiveTransfer const&)            = delete;
    ActiveTransfer()                                 = delete;

public:
    /**
     * @symbol ?onAckReceived\@ActiveTransfer\@Server\@ClientBlobCache\@\@QEAAX_K\@Z
     */
    MCAPI void onAckReceived(unsigned __int64); // NOLINT
};

}; // namespace ClientBlobCache::Server
