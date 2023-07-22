/**
 * @file  ItemStateInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStateInstance.
 *
 */
class ItemStateInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTATEINSTANCE
public:
    class ItemStateInstance& operator=(class ItemStateInstance const &) = delete;
    ItemStateInstance(class ItemStateInstance const &) = delete;
    ItemStateInstance() = delete;
#endif

public:
    /**
     * @symbol  ?initState\@ItemStateInstance\@\@QEAAXAEAIIIAEBVItemState\@\@\@Z
     */
    MCAPI void initState(unsigned int &, unsigned int, unsigned int, class ItemState const &);
    /**
     * @symbol  ?isValidData\@ItemStateInstance\@\@QEBA_NI\@Z
     */
    MCAPI bool isValidData(unsigned int) const;

};