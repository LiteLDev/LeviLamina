#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct PairInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk643386;
    ::ll::UntypedStorage<8, 16> mUnkf32851;
    ::ll::UntypedStorage<8, 16> mUnk7e3088;
    // NOLINTEND

public:
    // prevent constructor by default
    PairInfo& operator=(PairInfo const&);
    PairInfo(PairInfo const&);
    PairInfo();
};

} // namespace cohtml
