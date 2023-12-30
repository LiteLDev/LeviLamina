#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ProfanityFilterContext.h"

class UIProfanityContext {
public:
    // prevent constructor by default
    UIProfanityContext& operator=(UIProfanityContext const&);
    UIProfanityContext(UIProfanityContext const&);
    UIProfanityContext();

public:
    // NOLINTBEGIN
    // symbol:
    // ?filterProfanityFromString@UIProfanityContext@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ProfanityFilterContext@@AEBV23@_N@Z
    MCAPI std::string filterProfanityFromString(
        enum ProfanityFilterContext stringContext,
        std::string const&          str,
        bool                        allowFilterOverride
    ) const;

    // NOLINTEND
};
