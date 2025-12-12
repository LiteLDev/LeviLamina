#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct FlushedTransactions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc279ee;
    ::ll::UntypedStorage<8, 24> mUnk6cd0fd;
    // NOLINTEND

public:
    // prevent constructor by default
    FlushedTransactions& operator=(FlushedTransactions const&);
    FlushedTransactions(FlushedTransactions const&);
    FlushedTransactions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~FlushedTransactions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace mce
