#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaChannelParameters.h"

namespace cricket {

struct VideoReceiverParameters : public ::cricket::MediaChannelParameters {
public:
    // prevent constructor by default
    VideoReceiverParameters& operator=(VideoReceiverParameters const&);
    VideoReceiverParameters(VideoReceiverParameters const&);
    VideoReceiverParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoReceiverParameters() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
