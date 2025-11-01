#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedDtlsWritableState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk176625;
    ::ll::UntypedStorage<1, 1> mUnke9402e;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedDtlsWritableState& operator=(LoggedDtlsWritableState const&);
    LoggedDtlsWritableState(LoggedDtlsWritableState const&);
    LoggedDtlsWritableState();

};

}
