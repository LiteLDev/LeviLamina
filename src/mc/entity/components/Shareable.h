#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Shareable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREABLE
public:
    Shareable& operator=(Shareable const&) = delete;
    Shareable(Shareable const&)            = delete;
    Shareable()                            = delete;
#endif

public:
    /**
     * @symbol
     * ?setCraftInto\@Shareable\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCraftInto(std::string const&);
    /**
     * @symbol
     * ?setItem\@Shareable\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setItem(std::string const&);
};
