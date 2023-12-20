#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class ContentGroup {
public:
    // prevent constructor by default
    ContentGroup();

public:
    // NOLINTBEGIN
    // symbol: ?AddContentName@ContentGroup@cricket@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void AddContentName(std::string_view);

    // symbol: ??0ContentGroup@cricket@@QEAA@$$QEAV01@@Z
    MCAPI ContentGroup(class cricket::ContentGroup&&);

    // symbol: ??0ContentGroup@cricket@@QEAA@AEBV01@@Z
    MCAPI ContentGroup(class cricket::ContentGroup const&);

    // symbol: ??0ContentGroup@cricket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ContentGroup(std::string const&);

    // symbol:
    // ?FirstContentName@ContentGroup@cricket@@QEBAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const* FirstContentName() const;

    // symbol: ?HasContentName@ContentGroup@cricket@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool HasContentName(std::string_view) const;

    // symbol: ?RemoveContentName@ContentGroup@cricket@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool RemoveContentName(std::string_view);

    // symbol: ?ToString@ContentGroup@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??4ContentGroup@cricket@@QEAAAEAV01@AEBV01@@Z
    MCAPI class cricket::ContentGroup& operator=(class cricket::ContentGroup const&);

    // symbol: ??1ContentGroup@cricket@@QEAA@XZ
    MCAPI ~ContentGroup();

    // NOLINTEND
};

}; // namespace cricket
