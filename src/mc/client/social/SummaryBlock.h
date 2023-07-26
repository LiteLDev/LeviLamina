#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class SummaryBlock {

public:
    // prevent constructor by default
    SummaryBlock() = delete;

public:
    /**
     * @symbol ??0SummaryBlock\@Events\@Social\@\@QEAA\@AEBV012\@\@Z
     */
    MCAPI SummaryBlock(class Social::Events::SummaryBlock const&); // NOLINT
    /**
     * @symbol ??4SummaryBlock\@Events\@Social\@\@QEAAAEAV012\@AEBV012\@\@Z
     */
    MCAPI class Social::Events::SummaryBlock& operator=(class Social::Events::SummaryBlock const&); // NOLINT
    /**
     * @symbol ?summarize\@SummaryBlock\@Events\@Social\@\@QEAAXAEBV123\@\@Z
     */
    MCAPI void summarize(class Social::Events::SummaryBlock const&); // NOLINT
};

}; // namespace Social::Events
