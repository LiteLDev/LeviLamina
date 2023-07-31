#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {

public:
    // prevent constructor by default
    CommandRawText& operator=(CommandRawText const&) = delete;
    CommandRawText(CommandRawText const&)            = delete;
    CommandRawText()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getText\@CommandRawText\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getText() const;
    // NOLINTEND
};
