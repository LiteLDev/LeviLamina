#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

struct FilePruneResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2af14c;
    ::ll::UntypedStorage<8, 8>  mUnk3e049b;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePruneResult& operator=(FilePruneResult const&);
    FilePruneResult(FilePruneResult const&);
    FilePruneResult();
};

} // namespace Screenshots
