#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceCandidateErrorEvent {
public:
    // prevent constructor by default
    IceCandidateErrorEvent& operator=(IceCandidateErrorEvent const&);
    IceCandidateErrorEvent(IceCandidateErrorEvent const&);
    IceCandidateErrorEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1IceCandidateErrorEvent@cricket@@QEAA@XZ
    MCAPI ~IceCandidateErrorEvent();

    // NOLINTEND
};

}; // namespace cricket
