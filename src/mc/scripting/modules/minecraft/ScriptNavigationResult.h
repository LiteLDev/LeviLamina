#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptNavigationResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONRESULT
public:
    ScriptNavigationResult& operator=(ScriptNavigationResult const&) = delete;
    ScriptNavigationResult(ScriptNavigationResult const&)            = delete;
    ScriptNavigationResult()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?getPath\@ScriptNavigationResult\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Vec3> getPath() const;
    /**
     * @symbol ??1ScriptNavigationResult\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptNavigationResult();
    /**
     * @symbol
     * ?bind\@ScriptNavigationResult\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptNavigationResult\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptNavigationResult> bind();
};

}; // namespace ScriptModuleMinecraft
