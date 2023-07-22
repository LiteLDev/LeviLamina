/**
 * @file  MarketplaceSkinValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MarketplaceSkinValidator.
 *
 */
class MarketplaceSkinValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MARKETPLACESKINVALIDATOR
public:
    class MarketplaceSkinValidator& operator=(class MarketplaceSkinValidator const &) = delete;
    MarketplaceSkinValidator(class MarketplaceSkinValidator const &) = delete;
    MarketplaceSkinValidator() = delete;
#endif

public:
    /**
     * @symbol  ?checkIfValid\@MarketplaceSkinValidator\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool checkIfValid(std::string const &);

};