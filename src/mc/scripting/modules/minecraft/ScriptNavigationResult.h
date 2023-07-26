#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptNavigationResult {

public:
    // prevent constructor by default
    ScriptNavigationResult& operator=(ScriptNavigationResult const&) = delete;
    ScriptNavigationResult(ScriptNavigationResult const&)            = delete;
    ScriptNavigationResult()                                         = delete;

public:
    /**
     * @symbol
     * ?getPath\@ScriptNavigationResult\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Vec3> getPath() const; // NOLINT
    /**
     * @symbol ??1ScriptNavigationResult\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptNavigationResult(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptNavigationResult\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptNavigationResult\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptNavigationResult>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
