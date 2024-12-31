#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaChannelParameters.h"

namespace cricket {

struct AudioReceiverParameters : public ::cricket::MediaChannelParameters {
public:
    // prevent constructor by default
    AudioReceiverParameters& operator=(AudioReceiverParameters const&);
    AudioReceiverParameters(AudioReceiverParameters const&);
    AudioReceiverParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AudioReceiverParameters() /*override*/ = default;
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
