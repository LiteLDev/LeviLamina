/**
 * @file  SortItemInstanceIdAux.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SortItemInstanceIdAux.
 *
 */
class SortItemInstanceIdAux {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SORTITEMINSTANCEIDAUX
public:
    class SortItemInstanceIdAux& operator=(class SortItemInstanceIdAux const &) = delete;
    SortItemInstanceIdAux(class SortItemInstanceIdAux const &) = delete;
    SortItemInstanceIdAux() = delete;
#endif

public:
    /**
     * @hash   -398163653
     * @symbol ??RSortItemInstanceIdAux@@QEBA_NAEBVItemInstance@@0@Z
     */
    MCAPI bool operator()(class ItemInstance const &, class ItemInstance const &) const;

};