#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class TransferBuilder {
public:
    // prevent constructor by default
    TransferBuilder& operator=(TransferBuilder const&);
    TransferBuilder(TransferBuilder const&);
    TransferBuilder();

public:
    // NOLINTBEGIN
    // symbol:
    // ?add@TransferBuilder@Server@ClientBlobCache@@QEAAX_KAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void add(uint64 id, std::string& blob, bool);

    // symbol: ??1TransferBuilder@Server@ClientBlobCache@@QEAA@XZ
    MCAPI ~TransferBuilder();

    // NOLINTEND
};

}; // namespace ClientBlobCache::Server
