/**
 * @file  SortItemInstanceIdAux.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


struct SortItemInstanceIdAux {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SORTITEMINSTANCEIDAUX
public:
    struct SortItemInstanceIdAux& operator=(struct SortItemInstanceIdAux const &) = delete;
    SortItemInstanceIdAux(struct SortItemInstanceIdAux const &) = delete;
    SortItemInstanceIdAux() = delete;
#endif

public:
    /**
     * @symbol  ??RSortItemInstanceIdAux\@\@QEBA_NAEBVItemInstance\@\@0\@Z
     */
    MCAPI bool operator()(class ItemInstance const &, class ItemInstance const &) const;

};