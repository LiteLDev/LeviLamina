#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::CodeBuilder {

class Event {

public:
    // prevent constructor by default
    Event& operator=(Event const&) = delete;
    Event(Event const&)            = delete;
    Event()                        = delete;

public:
    /**
     * @symbol
     * ??0Event\@CodeBuilder\@Util\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Event(std::string const&); // NOLINT
    /**
     * @symbol ??1Event\@CodeBuilder\@Util\@\@QEAA\@XZ
     */
    MCAPI ~Event(); // NOLINT
};

}; // namespace Util::CodeBuilder
