/**
 * @file  ScriptBindingReleaseList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptBindingReleaseList.
 *
 */
class ScriptBindingReleaseList {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBINDINGRELEASELIST
public:
    class ScriptBindingReleaseList& operator=(class ScriptBindingReleaseList const &) = delete;
    ScriptBindingReleaseList(class ScriptBindingReleaseList const &) = delete;
    ScriptBindingReleaseList() = delete;
#endif

public:
    /**
     * @symbol ??0ScriptBindingReleaseList\@\@QEAA\@V?$vector\@UReleaseDetails\@ScriptBindingReleaseList\@\@V?$allocator\@UReleaseDetails\@ScriptBindingReleaseList\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptBindingReleaseList(std::vector<struct ScriptBindingReleaseList::ReleaseDetails>);

};
