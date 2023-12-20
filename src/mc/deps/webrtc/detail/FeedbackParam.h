#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class FeedbackParam {
public:
    // prevent constructor by default
    FeedbackParam& operator=(FeedbackParam const&);
    FeedbackParam(FeedbackParam const&);
    FeedbackParam();

public:
    // NOLINTBEGIN
    // symbol: ??8FeedbackParam@cricket@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class cricket::FeedbackParam const&) const;

    // symbol: ??1FeedbackParam@cricket@@QEAA@XZ
    MCAPI ~FeedbackParam();

    // NOLINTEND
};

}; // namespace cricket
