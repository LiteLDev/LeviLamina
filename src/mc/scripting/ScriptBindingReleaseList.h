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
        ReleaseDetails& operator=(ReleaseDetails const&) = delete;
        ReleaseDetails(ReleaseDetails const&)            = delete;
        ReleaseDetails()                                 = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1ReleaseDetails\@ScriptBindingReleaseList\@\@QEAA\@XZ
         */
        MCAPI ~ReleaseDetails();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBindingReleaseList& operator=(ScriptBindingReleaseList const&) = delete;
    ScriptBindingReleaseList(ScriptBindingReleaseList const&)            = delete;
    ScriptBindingReleaseList()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ScriptBindingReleaseList\@\@QEAA\@V?$vector\@UReleaseDetails\@ScriptBindingReleaseList\@\@V?$allocator\@UReleaseDetails\@ScriptBindingReleaseList\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptBindingReleaseList(std::vector<struct ScriptBindingReleaseList::ReleaseDetails>);
    // NOLINTEND
};
