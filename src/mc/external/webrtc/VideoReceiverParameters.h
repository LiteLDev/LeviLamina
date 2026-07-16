#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaChannelParameters.h"

namespace webrtc {

struct VideoReceiverParameters : public ::webrtc::MediaChannelParameters {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoReceiverParameters() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
