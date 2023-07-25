#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptPackPermissions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPACKPERMISSIONS
public:
    ScriptPackPermissions& operator=(ScriptPackPermissions const&) = delete;
    ScriptPackPermissions()                                        = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPackPermissions\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackPermissions(class ScriptPackPermissions const&);

    // private:

private:
    /**
     * @symbol
     * ?sWildCardModuleName\@ScriptPackPermissions\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sWildCardModuleName;
};
