#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContentSource.h"

namespace cricket {

struct RtcpMuxFilter {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool ExpectAnswer(::cricket::ContentSource);

    MCNAPI bool ExpectOffer(bool, ::cricket::ContentSource);

    MCNAPI bool IsActive() const;

    MCNAPI bool IsFullyActive() const;

    MCNAPI bool IsProvisionallyActive() const;

    MCNAPI RtcpMuxFilter();

    MCNAPI bool SetAnswer(bool, ::cricket::ContentSource);

    MCNAPI bool SetOffer(bool, ::cricket::ContentSource);

    MCNAPI bool SetProvisionalAnswer(bool, ::cricket::ContentSource);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace cricket
