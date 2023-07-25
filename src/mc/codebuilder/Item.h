#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_ITEM
public:
    Item& operator=(Item const&) = delete;
    Item(Item const&)            = delete;
    Item()                       = delete;
#endif

public:
    /**
     * @symbol ??1Item\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~Item();
};

}; // namespace CodeBuilder
