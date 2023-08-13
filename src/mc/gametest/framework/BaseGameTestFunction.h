#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace gametest {

class BaseGameTestFunction {

public:
    // prevent constructor by default
    BaseGameTestFunction& operator=(BaseGameTestFunction const&) = delete;
    BaseGameTestFunction(BaseGameTestFunction const&)            = delete;
    BaseGameTestFunction()                                       = delete;

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
    createContext(class gametest::BaseGameTestHelper&) const = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?run\@ScriptAsyncGameTestFunction\@ScriptModuleGameTest\@\@UEBA?AV?$unique_ptr\@VIGameTestFunctionRunResult\@gametest\@\@U?$default_delete\@VIGameTestFunctionRunResult\@gametest\@\@\@std\@\@\@std\@\@AEAVBaseGameTestHelper\@gametest\@\@AEAVIGameTestFunctionContext\@6\@\@Z
     */
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_BASEGAMETESTFUNCTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseGameTestFunction();
#endif
    /**
     * @symbol
     * ??0BaseGameTestFunction\@gametest\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00HHH_N1HHV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI
    BaseGameTestFunction(std::string, std::string, std::string, int, int, int, bool, bool, int, int, std::vector<std::string>);
    /**
     * @symbol
     * ?getBatchName\@BaseGameTestFunction\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getBatchName() const;
    /**
     * @symbol ?getRotate\@BaseGameTestFunction\@gametest\@\@QEBA_NXZ
     */
    MCAPI bool getRotate() const;
    /**
     * @symbol
     * ?getStructureName\@BaseGameTestFunction\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getStructureName() const;
    /**
     * @symbol
     * ?getTestName\@BaseGameTestFunction\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getTestName() const;
    /**
     * @symbol
     * ?hasTag\@BaseGameTestFunction\@gametest\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag(std::string const&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addTag\@BaseGameTestFunction\@gametest\@\@IEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _addTag(std::string);
    // NOLINTEND
};

}; // namespace gametest
