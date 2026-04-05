#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

struct FilePruneResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf0b4ab;
    ::ll::UntypedStorage<8, 8>  mUnk3e049b;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePruneResult& operator=(FilePruneResult const&);
    FilePruneResult(FilePruneResult const&);
    FilePruneResult();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~FilePruneResult();
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

} // namespace Screenshots
