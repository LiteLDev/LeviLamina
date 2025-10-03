#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TargetTransferRate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1b3319;
    ::ll::UntypedStorage<8, 40> mUnk8d4204;
    ::ll::UntypedStorage<8, 8>  mUnke59d88;
    ::ll::UntypedStorage<8, 8>  mUnk91eb5a;
    ::ll::UntypedStorage<8, 8>  mUnkadb451;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetTransferRate& operator=(TargetTransferRate const&);
    TargetTransferRate(TargetTransferRate const&);
    TargetTransferRate();
};

} // namespace webrtc
