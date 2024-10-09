#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct InboxSummaryData {
public:
    // prevent constructor by default
    InboxSummaryData& operator=(InboxSummaryData const&);
    InboxSummaryData(InboxSummaryData const&);
    InboxSummaryData();
};

}; // namespace Social::Events
