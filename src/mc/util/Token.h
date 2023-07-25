#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Token {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOKEN
public:
    Token& operator=(Token const&) = delete;
    Token(Token const&)            = delete;
    Token()                        = delete;
#endif

public:
    /**
     * @symbol ??0Token\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Token(std::string const&);
    /**
     * @symbol
     * ?getText\@Token\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string const& getText(std::string const&) const;
    /**
     * @symbol ??1Token\@\@QEAA\@XZ
     */
    MCAPI ~Token();
    /**
     * @symbol
     * ?tokenize\@Token\@\@SA?AV?$vector\@UToken\@\@V?$allocator\@UToken\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::vector<struct Token> tokenize(std::string const&);

    // protected:
    /**
     * @symbol ?_parseRandom\@Token\@\@IEAA_NXZ
     */
    MCAPI bool _parseRandom();
};
