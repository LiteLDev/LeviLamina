/**
 * @file  ScriptBindingReleaseList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"

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
     * @symbol  ??0ScriptBindingReleaseList\@\@QEAA\@V?$vector\@U?$pair\@PEBQEBDUVersion\@Scripting\@\@\@std\@\@V?$allocator\@U?$pair\@PEBQEBDUVersion\@Scripting\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI ScriptBindingReleaseList(std::vector<struct std::pair<char const *const *, struct Scripting::Version>>);

};