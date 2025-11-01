#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpNackStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkff6d70;
    ::ll::UntypedStorage<4, 4> mUnkf93abf;
    ::ll::UntypedStorage<4, 4> mUnk9b715e;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcpNackStats& operator=(RtcpNackStats const&);
    RtcpNackStats(RtcpNackStats const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ReportRequest(ushort sequence_number);

    MCNAPI RtcpNackStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

};

}
