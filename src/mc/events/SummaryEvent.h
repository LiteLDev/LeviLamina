#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class SummaryEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_EVENTS_SUMMARYEVENT
public:
    SummaryEvent& operator=(SummaryEvent const&) = delete;
    SummaryEvent()                               = delete;
#endif

public:
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
};

}; // namespace Social::Events
