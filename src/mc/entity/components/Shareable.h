#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Shareable {

public:
    // prevent constructor by default
    Shareable& operator=(Shareable const&) = delete;
    Shareable(Shareable const&)            = delete;
    Shareable()                            = delete;

public:
    /**
     * @symbol
     * ?setCraftInto\@Shareable\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCraftInto(std::string const&); // NOLINT
    /**
     * @symbol
     * ?setItem\@Shareable\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setItem(std::string const&); // NOLINT
};
