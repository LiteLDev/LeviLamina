#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContentSource.h"

namespace cricket {

struct RtcpMuxFilter {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool ExpectAnswer(::cricket::ContentSource);

    MCAPI bool ExpectOffer(bool, ::cricket::ContentSource);

    MCAPI bool IsActive() const;

    MCAPI bool IsFullyActive() const;

    MCAPI bool IsProvisionallyActive() const;

    MCAPI RtcpMuxFilter();

    MCAPI bool SetAnswer(bool, ::cricket::ContentSource);

    MCAPI bool SetOffer(bool, ::cricket::ContentSource);

    MCAPI bool SetProvisionalAnswer(bool, ::cricket::ContentSource);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace cricket
