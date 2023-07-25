#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SortItemInstanceIdAux {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SORTITEMINSTANCEIDAUX
public:
    SortItemInstanceIdAux& operator=(SortItemInstanceIdAux const&) = delete;
    SortItemInstanceIdAux(SortItemInstanceIdAux const&)            = delete;
    SortItemInstanceIdAux()                                        = delete;
#endif

public:
    /**
     * @symbol ??RSortItemInstanceIdAux\@\@QEBA_NAEBVItemInstance\@\@0\@Z
     */
    MCAPI bool operator()(class ItemInstance const&, class ItemInstance const&) const;
};
