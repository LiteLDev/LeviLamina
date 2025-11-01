#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedDtlsTransportState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5817b2;
    ::ll::UntypedStorage<4, 4> mUnk665fa7;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedDtlsTransportState& operator=(LoggedDtlsTransportState const&);
    LoggedDtlsTransportState(LoggedDtlsTransportState const&);
    LoggedDtlsTransportState();
};

} // namespace webrtc
