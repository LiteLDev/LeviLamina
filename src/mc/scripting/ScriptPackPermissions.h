#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptPackPermissions {

public:
    // prevent constructor by default
    ScriptPackPermissions& operator=(ScriptPackPermissions const&) = delete;
    ScriptPackPermissions()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptPackPermissions\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackPermissions(class ScriptPackPermissions const&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?sWildCardModuleName\@ScriptPackPermissions\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sWildCardModuleName;
    // NOLINTEND
};
