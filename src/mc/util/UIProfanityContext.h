#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UIProfanityContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UIPROFANITYCONTEXT
public:
    UIProfanityContext& operator=(UIProfanityContext const&) = delete;
    UIProfanityContext(UIProfanityContext const&)            = delete;
    UIProfanityContext()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ?filterProfanityFromString\@UIProfanityContext\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ProfanityFilterContext\@\@AEBV23\@_N\@Z
     */
    MCAPI std::string filterProfanityFromString(enum class ProfanityFilterContext, std::string const&, bool) const;
};
