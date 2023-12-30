#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class FeedbackParam; }
// clang-format on

namespace cricket {

class FeedbackParams {
public:
    // prevent constructor by default
    FeedbackParams& operator=(FeedbackParams const&);

public:
    // NOLINTBEGIN
    // symbol: ?Add@FeedbackParams@cricket@@QEAAXAEBVFeedbackParam@2@@Z
    MCAPI void Add(class cricket::FeedbackParam const&);

    // symbol: ??0FeedbackParams@cricket@@QEAA@XZ
    MCAPI FeedbackParams();

    // symbol: ??0FeedbackParams@cricket@@QEAA@AEBV01@@Z
    MCAPI FeedbackParams(class cricket::FeedbackParams const&);

    // symbol: ?Has@FeedbackParams@cricket@@QEBA_NAEBVFeedbackParam@2@@Z
    MCAPI bool Has(class cricket::FeedbackParam const&) const;

    // symbol: ?Intersect@FeedbackParams@cricket@@QEAAXAEBV12@@Z
    MCAPI void Intersect(class cricket::FeedbackParams const&);

    // symbol: ??8FeedbackParams@cricket@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class cricket::FeedbackParams const&) const;

    // symbol: ??1FeedbackParams@cricket@@QEAA@XZ
    MCAPI ~FeedbackParams();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?HasDuplicateEntries@FeedbackParams@cricket@@AEBA_NXZ
    MCAPI bool HasDuplicateEntries() const;

    // NOLINTEND
};

}; // namespace cricket
