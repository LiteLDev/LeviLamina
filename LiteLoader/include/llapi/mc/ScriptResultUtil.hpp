/**
 * @file  ScriptResultUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptResultUtil.
 *
 */
namespace ScriptResultUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?GametestResultToScriptingValueResult\@ScriptResultUtil\@\@YA?AV?$Result\@V?$StrongTypedObjectHandle\@VVec3\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$variant\@UGameTestError\@gametest\@\@VVec3\@\@\@std\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class Vec3>> GametestResultToScriptingValueResult(class std::variant<struct gametest::GameTestError, class Vec3> const &, class Scripting::WeakLifetimeScope const &);
    /**
     * @symbol ?GametestResultToScriptingValueResult\@ScriptResultUtil\@\@YA?AV?$Result\@V?$StrongTypedObjectHandle\@VVec3\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$variant\@UGameTestError\@gametest\@\@VBlockPos\@\@\@std\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class Vec3>> GametestResultToScriptingValueResult(class std::variant<struct gametest::GameTestError, class BlockPos> const &, class Scripting::WeakLifetimeScope const &);
    /**
     * @symbol ?ScriptingResultToGameTestResult\@ScriptResultUtil\@\@YA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBVResultAny\@Scripting\@\@\@Z
     */
    MCAPI class std::optional<struct gametest::GameTestError> ScriptingResultToGameTestResult(class Scripting::ResultAny const &);

};