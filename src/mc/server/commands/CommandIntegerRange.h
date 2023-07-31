#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {

public:
    // prevent constructor by default
    CommandIntegerRange& operator=(CommandIntegerRange const&) = delete;
    CommandIntegerRange(CommandIntegerRange const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandIntegerRange\@\@QEAA\@HH_N\@Z
     */
    MCAPI CommandIntegerRange(int, int, bool);
    /**
     * @symbol ??0CommandIntegerRange\@\@QEAA\@XZ
     */
    MCAPI CommandIntegerRange();
    /**
     * @symbol ?isWithinRange\@CommandIntegerRange\@\@QEBA_NH\@Z
     */
    MCAPI bool isWithinRange(int) const;
    // NOLINTEND
};
