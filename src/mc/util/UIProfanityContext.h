#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UIProfanityContext {

public:
    // prevent constructor by default
    UIProfanityContext& operator=(UIProfanityContext const&) = delete;
    UIProfanityContext(UIProfanityContext const&)            = delete;
    UIProfanityContext()                                     = delete;

public:
    /**
     * @symbol
     * ?filterProfanityFromString\@UIProfanityContext\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ProfanityFilterContext\@\@AEBV23\@_N\@Z
     */
    MCAPI std::string
          filterProfanityFromString(enum class ProfanityFilterContext, std::string const&, bool) const; // NOLINT
};
