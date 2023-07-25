#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on

namespace ClientBlobCache::Server {

class TransferBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBLOBCACHE_SERVER_TRANSFERBUILDER
public:
    TransferBuilder& operator=(TransferBuilder const&) = delete;
    TransferBuilder(TransferBuilder const&)            = delete;
#endif

public:
    /**
     * @symbol
     * ??0TransferBuilder\@Server\@ClientBlobCache\@\@QEAA\@AEAVActiveTransfersManager\@12\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI TransferBuilder(class ClientBlobCache::Server::ActiveTransfersManager&, class NetworkIdentifier const&);
    /**
     * @symbol ??0TransferBuilder\@Server\@ClientBlobCache\@\@QEAA\@XZ
     */
    MCAPI TransferBuilder();
    /**
     * @symbol
     * ?add\@TransferBuilder\@Server\@ClientBlobCache\@\@QEAAX_KAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void add(unsigned __int64, std::string&, bool);
    /**
     * @symbol ??1TransferBuilder\@Server\@ClientBlobCache\@\@QEAA\@XZ
     */
    MCAPI ~TransferBuilder();
};

}; // namespace ClientBlobCache::Server
