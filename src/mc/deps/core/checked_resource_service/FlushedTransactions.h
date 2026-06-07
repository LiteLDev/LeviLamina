#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class IDeferredDebugUpdate; }
// clang-format on

namespace mce {

struct FlushedTransactions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc279ee;
    ::ll::UntypedStorage<8, 24> mUnkf602f1;
    // NOLINTEND

public:
    // prevent constructor by default
    FlushedTransactions& operator=(FlushedTransactions const&);
    FlushedTransactions(FlushedTransactions const&);
    FlushedTransactions();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI FlushedTransactions(
        uint64                                                          count,
        ::std::vector<::std::unique_ptr<::mce::IDeferredDebugUpdate>>&& deferredDebugUpdates
    );

    MCNAPI uint64 flushDeferredDebugUpdates();

    MCNAPI uint64 getCount() const;

    MCNAPI ~FlushedTransactions();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(uint64 count, ::std::vector<::std::unique_ptr<::mce::IDeferredDebugUpdate>>&& deferredDebugUpdates);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace mce
