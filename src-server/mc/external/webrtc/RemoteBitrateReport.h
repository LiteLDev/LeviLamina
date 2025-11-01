#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RemoteBitrateReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc8de99;
    ::ll::UntypedStorage<8, 8> mUnkc19363;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteBitrateReport& operator=(RemoteBitrateReport const&);
    RemoteBitrateReport(RemoteBitrateReport const&);
    RemoteBitrateReport();

};

}
