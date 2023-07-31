#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {

public:
    // prevent constructor by default
    CommandWildcardInt& operator=(CommandWildcardInt const&) = delete;
    CommandWildcardInt(CommandWildcardInt const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandWildcardInt\@\@QEAA\@XZ
     */
    MCAPI CommandWildcardInt();
    /**
     * @symbol ?getValue\@CommandWildcardInt\@\@QEBAHXZ
     */
    MCAPI int getValue() const;
    /**
     * @symbol ?isWildcard\@CommandWildcardInt\@\@QEBA_NXZ
     */
    MCAPI bool isWildcard() const;
    // NOLINTEND
};
