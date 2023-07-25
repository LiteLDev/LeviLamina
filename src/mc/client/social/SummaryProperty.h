#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class SummaryProperty {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_EVENTS_SUMMARYPROPERTY
public:
    SummaryProperty(SummaryProperty const&) = delete;
    SummaryProperty()                       = delete;
#endif

public:
    /**
     * @symbol ??4SummaryProperty\@Events\@Social\@\@QEAAAEAV012\@AEBV012\@\@Z
     */
    MCAPI class Social::Events::SummaryProperty& operator=(class Social::Events::SummaryProperty const&);
    /**
     * @symbol ?summarize\@SummaryProperty\@Events\@Social\@\@QEAAXAEBV123\@\@Z
     */
    MCAPI void summarize(class Social::Events::SummaryProperty const&);
    /**
     * @symbol ??1SummaryProperty\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~SummaryProperty();
};

}; // namespace Social::Events
