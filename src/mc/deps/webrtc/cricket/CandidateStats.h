#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class CandidateStats {
public:
    // prevent constructor by default
    CandidateStats& operator=(CandidateStats const&);
    CandidateStats(CandidateStats const&);
    CandidateStats();

public:
    // NOLINTBEGIN
    // symbol: ??1CandidateStats@cricket@@QEAA@XZ
    MCAPI ~CandidateStats();

    // NOLINTEND
};

}; // namespace cricket
