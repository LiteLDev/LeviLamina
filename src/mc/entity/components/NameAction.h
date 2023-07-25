#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NameAction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEACTION
public:
    NameAction& operator=(NameAction const&) = delete;
    NameAction()                             = delete;
#endif

public:
    /**
     * @symbol ??0NameAction\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI NameAction(struct NameAction const&);
    /**
     * @symbol
     * ?addNameFilterByName\@NameAction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addNameFilterByName(std::string const&);
    /**
     * @symbol ??1NameAction\@\@QEAA\@XZ
     */
    MCAPI ~NameAction();
};
