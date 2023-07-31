#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class SummaryEvent {

public:
    // prevent constructor by default
    SummaryEvent& operator=(SummaryEvent const&) = delete;
    SummaryEvent()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SummaryEvent\@Events\@Social\@\@QEAA\@AEBV012\@\@Z
     */
    MCAPI SummaryEvent(class Social::Events::SummaryEvent const&);
    /**
     * @symbol ?summarize\@SummaryEvent\@Events\@Social\@\@QEAAXAEBV123\@\@Z
     */
    MCAPI void summarize(class Social::Events::SummaryEvent const&);
    /**
     * @symbol ??1SummaryEvent\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~SummaryEvent();
    // NOLINTEND
};

}; // namespace Social::Events
