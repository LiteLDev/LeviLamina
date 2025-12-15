#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mcr {

struct DeferredResourceTransactions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb4bdc8;
    ::ll::UntypedStorage<8, 24> mUnk898171;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredResourceTransactions& operator=(DeferredResourceTransactions const&);
    DeferredResourceTransactions(DeferredResourceTransactions const&);
    DeferredResourceTransactions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeferredResourceTransactions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mcr
