#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class ActiveTransfer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBLOBCACHE_SERVER_ACTIVETRANSFER
public:
    ActiveTransfer& operator=(ActiveTransfer const&) = delete;
    ActiveTransfer(ActiveTransfer const&)            = delete;
    ActiveTransfer()                                 = delete;
#endif

public:
    /**
     * @symbol ?onAckReceived\@ActiveTransfer\@Server\@ClientBlobCache\@\@QEAAX_K\@Z
     */
    MCAPI void onAckReceived(unsigned __int64);
};

}; // namespace ClientBlobCache::Server
