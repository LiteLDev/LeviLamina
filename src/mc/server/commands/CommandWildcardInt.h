#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDWILDCARDINT
public:
    CommandWildcardInt& operator=(CommandWildcardInt const&) = delete;
    CommandWildcardInt(CommandWildcardInt const&)            = delete;
#endif

public:
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
};
