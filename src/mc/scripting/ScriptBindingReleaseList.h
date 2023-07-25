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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBINDINGRELEASELIST_RELEASEDETAILS
    public:
        ReleaseDetails& operator=(ReleaseDetails const&) = delete;
        ReleaseDetails(ReleaseDetails const&)            = delete;
        ReleaseDetails()                                 = delete;
#endif

    public:
        /**
         * @symbol ??1ReleaseDetails\@ScriptBindingReleaseList\@\@QEAA\@XZ
         */
        MCAPI ~ReleaseDetails();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBINDINGRELEASELIST
public:
    ScriptBindingReleaseList& operator=(ScriptBindingReleaseList const&) = delete;
    ScriptBindingReleaseList(ScriptBindingReleaseList const&)            = delete;
    ScriptBindingReleaseList()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptBindingReleaseList\@\@QEAA\@V?$vector\@UReleaseDetails\@ScriptBindingReleaseList\@\@V?$allocator\@UReleaseDetails\@ScriptBindingReleaseList\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptBindingReleaseList(std::vector<struct ScriptBindingReleaseList::ReleaseDetails>);
};
