#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SsrcGroup {
public:
    // prevent constructor by default
    SsrcGroup();

public:
    // NOLINTBEGIN
    // symbol: ??0SsrcGroup@cricket@@QEAA@$$QEAU01@@Z
    MCAPI SsrcGroup(struct cricket::SsrcGroup&&);

    // symbol: ??0SsrcGroup@cricket@@QEAA@AEBU01@@Z
    MCAPI SsrcGroup(struct cricket::SsrcGroup const&);

    // symbol:
    // ??0SsrcGroup@cricket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@IV?$allocator@I@std@@@3@@Z
    MCAPI SsrcGroup(std::string const&, std::vector<uint> const&);

    // symbol:
    // ?has_semantics@SsrcGroup@cricket@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool has_semantics(std::string const&) const;

    // symbol: ??4SsrcGroup@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::SsrcGroup& operator=(struct cricket::SsrcGroup const&);

    // symbol: ??1SsrcGroup@cricket@@QEAA@XZ
    MCAPI ~SsrcGroup();

    // NOLINTEND
};

}; // namespace cricket
