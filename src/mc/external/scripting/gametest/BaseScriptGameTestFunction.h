#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace ScriptModuleGameTest {

class BaseScriptGameTestFunction {

public:
    // prevent constructor by default
    BaseScriptGameTestFunction& operator=(BaseScriptGameTestFunction const&) = delete;
    BaseScriptGameTestFunction(BaseScriptGameTestFunction const&)            = delete;
    BaseScriptGameTestFunction()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?createContext\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@UEBA?AV?$unique_ptr\@VIGameTestFunctionContext\@gametest\@\@U?$default_delete\@VIGameTestFunctionContext\@gametest\@\@\@std\@\@\@std\@\@AEAVBaseGameTestHelper\@gametest\@\@\@Z
     */
    virtual std::unique_ptr<class gametest::IGameTestFunctionContext>
    createContext(class gametest::BaseGameTestHelper&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?run\@ScriptAsyncGameTestFunction\@ScriptModuleGameTest\@\@UEBA?AV?$unique_ptr\@VIGameTestFunctionRunResult\@gametest\@\@U?$default_delete\@VIGameTestFunctionRunResult\@gametest\@\@\@std\@\@\@std\@\@AEAVBaseGameTestHelper\@gametest\@\@AEAVIGameTestFunctionContext\@6\@\@Z
     */
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEGAMETEST_BASESCRIPTGAMETESTFUNCTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseScriptGameTestFunction();
#endif
    /**
     * @symbol
     * ??0BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAA\@VWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI BaseScriptGameTestFunction(class Scripting::WeakLifetimeScope, std::string const&);
    /**
     * @symbol
     * ?addTag\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addTag(std::string);
    /**
     * @symbol
     * ?setBatch\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setBatch(std::string);
    /**
     * @symbol ?setMaxAttempts\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXH\@Z
     */
    MCAPI void setMaxAttempts(int);
    /**
     * @symbol ?setMaxTicks\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXH\@Z
     */
    MCAPI void setMaxTicks(int);
    /**
     * @symbol ?setPadding\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXH\@Z
     */
    MCAPI void setPadding(int);
    /**
     * @symbol ?setRequired\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAX_N\@Z
     */
    MCAPI void setRequired(bool);
    /**
     * @symbol ?setRequiredSuccesses\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXH\@Z
     */
    MCAPI void setRequiredSuccesses(int);
    /**
     * @symbol ?setRotate\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAX_N\@Z
     */
    MCAPI void setRotate(bool);
    /**
     * @symbol ?setSetupTicks\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXH\@Z
     */
    MCAPI void setSetupTicks(int);
    /**
     * @symbol
     * ?setStructureName\@BaseScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setStructureName(std::string);
    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
