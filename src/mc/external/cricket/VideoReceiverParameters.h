#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaChannelParameters.h"

namespace cricket {

struct VideoReceiverParameters : public ::cricket::MediaChannelParameters {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
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

} // namespace cricket
