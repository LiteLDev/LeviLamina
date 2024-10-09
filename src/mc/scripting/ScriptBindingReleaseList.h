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
    MCAPI explicit ScriptBindingReleaseList(std::vector<struct ScriptBindingReleaseList::ReleaseDetails> releaseList);

    // NOLINTEND
};
