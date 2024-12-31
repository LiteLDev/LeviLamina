#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaContentDescription.h"

namespace cricket {

class RtpMediaContentDescription : public ::cricket::MediaContentDescription {
public:
    // prevent constructor by default
    RtpMediaContentDescription& operator=(RtpMediaContentDescription const&);
    RtpMediaContentDescription(RtpMediaContentDescription const&);
    RtpMediaContentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpMediaContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
