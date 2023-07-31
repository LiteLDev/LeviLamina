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
    // NOLINTBEGIN
    /**
     * @symbol ?onAckReceived\@ActiveTransfer\@Server\@ClientBlobCache\@\@QEAAX_K\@Z
     */
    MCAPI void onAckReceived(uint64_t);
    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
