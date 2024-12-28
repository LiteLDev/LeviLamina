#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FallingBlockSystemOnLand {

struct DelayDelegateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka468cf;
    ::ll::UntypedStorage<8, 8>  mUnk4f5d56;
    ::ll::UntypedStorage<4, 12> mUnkceac31;
    ::ll::UntypedStorage<8, 8>  mUnk56aa71;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayDelegateData& operator=(DelayDelegateData const&);
    DelayDelegateData(DelayDelegateData const&);
    DelayDelegateData();
};

} // namespace FallingBlockSystemOnLand
