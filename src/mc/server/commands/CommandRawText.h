#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDRAWTEXT
public:
    CommandRawText& operator=(CommandRawText const&) = delete;
    CommandRawText(CommandRawText const&)            = delete;
    CommandRawText()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?getText\@CommandRawText\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getText() const;
};
