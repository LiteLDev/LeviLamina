#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TransportLossReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk127194;
    ::ll::UntypedStorage<8, 8> mUnke31faf;
    ::ll::UntypedStorage<8, 8> mUnkd73586;
    ::ll::UntypedStorage<8, 8> mUnk8f9445;
    ::ll::UntypedStorage<8, 8> mUnk7f765f;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportLossReport& operator=(TransportLossReport const&);
    TransportLossReport(TransportLossReport const&);
    TransportLossReport();

};

}
