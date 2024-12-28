#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DataChannelStats {
public:
    // prevent constructor by default
    DataChannelStats& operator=(DataChannelStats const&);
    DataChannelStats(DataChannelStats const&);
    DataChannelStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DataChannelStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
