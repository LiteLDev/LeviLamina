#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {

public:
    // prevent constructor by default
    CommandWildcardInt& operator=(CommandWildcardInt const&) = delete;
    CommandWildcardInt(CommandWildcardInt const&)            = delete;

public:
    /**
     * @symbol ??0CommandWildcardInt\@\@QEAA\@XZ
     */
    MCAPI CommandWildcardInt(); // NOLINT
    /**
     * @symbol ?getValue\@CommandWildcardInt\@\@QEBAHXZ
     */
    MCAPI int getValue() const; // NOLINT
    /**
     * @symbol ?isWildcard\@CommandWildcardInt\@\@QEBA_NXZ
     */
    MCAPI bool isWildcard() const; // NOLINT
};
