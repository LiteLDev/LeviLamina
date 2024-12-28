#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class ActiveTransfer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnka898bd;
    ::ll::UntypedStorage<8, 160> mUnk320474;
    ::ll::UntypedStorage<8, 64>  mUnk4bec70;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveTransfer& operator=(ActiveTransfer const&);
    ActiveTransfer(ActiveTransfer const&);
    ActiveTransfer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isDone() const;

    MCAPI void onAckReceived(uint64 acked);
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
