/**
 * @file  UIProfanityContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UIProfanityContext.
 *
 */
class UIProfanityContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UIPROFANITYCONTEXT
public:
    class UIProfanityContext& operator=(class UIProfanityContext const &) = delete;
    UIProfanityContext(class UIProfanityContext const &) = delete;
    UIProfanityContext() = delete;
#endif

public:
    /**
     * @symbol  ?filterProfanityFromString\@UIProfanityContext\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ProfanityFilterContext\@\@AEBV23\@_N\@Z
     */
    MCAPI std::string filterProfanityFromString(enum class ProfanityFilterContext, std::string const &, bool) const;

};