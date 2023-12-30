#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct CandidatePairChangeEvent {
public:
    // prevent constructor by default
    CandidatePairChangeEvent& operator=(CandidatePairChangeEvent const&);
    CandidatePairChangeEvent(CandidatePairChangeEvent const&);
    CandidatePairChangeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1CandidatePairChangeEvent@cricket@@QEAA@XZ
    MCAPI ~CandidatePairChangeEvent();

    // NOLINTEND
};

}; // namespace cricket
