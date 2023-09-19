#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptBindingReleaseList {
public:
    // ScriptBindingReleaseList inner types declare
    // clang-format off
    struct ReleaseDetails;
    // clang-format on

    // ScriptBindingReleaseList inner types define
    struct ReleaseDetails {
    public:
        // prevent constructor by default
        ReleaseDetails& operator=(ReleaseDetails const&);
        ReleaseDetails(ReleaseDetails const&);
        ReleaseDetails();

    public:
        // NOLINTBEGIN
        // symbol: ??1ReleaseDetails@ScriptBindingReleaseList@@QEAA@XZ
        MCAPI ~ReleaseDetails();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBindingReleaseList& operator=(ScriptBindingReleaseList const&);
    ScriptBindingReleaseList(ScriptBindingReleaseList const&);
    ScriptBindingReleaseList();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptBindingReleaseList@@QEAA@V?$vector@UReleaseDetails@ScriptBindingReleaseList@@V?$allocator@UReleaseDetails@ScriptBindingReleaseList@@@std@@@std@@@Z
    MCAPI explicit ScriptBindingReleaseList(std::vector<struct ScriptBindingReleaseList::ReleaseDetails>);

    // NOLINTEND
};
