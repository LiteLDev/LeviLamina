#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentScopeString {
public:
    // prevent constructor by default
    ContentScopeString& operator=(ContentScopeString const&);
    ContentScopeString(ContentScopeString const&);
    ContentScopeString();

public:
    // NOLINTBEGIN
    // symbol: ??0ContentScopeString@@QEAA@PEBD@Z
    MCAPI explicit ContentScopeString(char const*);

    // symbol: ??0ContentScopeString@@QEAA@$$QEAV0@@Z
    MCAPI ContentScopeString(class ContentScopeString&&);

    // symbol: ??0ContentScopeString@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ContentScopeString(std::string);

    // symbol: ??0ContentScopeString@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI explicit ContentScopeString(std::string_view);

    // symbol: ?getScopeString@ContentScopeString@@QEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    MCAPI std::string_view getScopeString() const;

    // symbol: ??1ContentScopeString@@QEAA@XZ
    MCAPI ~ContentScopeString();

    // NOLINTEND
};
