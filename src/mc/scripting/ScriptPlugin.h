#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ScriptData; }
// clang-format on

class ScriptPlugin {

public:
    // prevent constructor by default
    ScriptPlugin& operator=(ScriptPlugin const&) = delete;
    ScriptPlugin(ScriptPlugin const&)            = delete;
    ScriptPlugin()                               = delete;

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
     * ?onLoadScript\@ScriptPlugin\@\@UEAA?AV?$optional\@UScriptData\@Scripting\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@V?$optional\@V?$vector\@UModuleBinding\@Scripting\@\@V?$allocator\@UModuleBinding\@Scripting\@\@\@std\@\@\@std\@\@\@3\@\@Z
     */
    virtual std::optional<struct Scripting::ScriptData>
    onLoadScript(std::string const&, std::optional<std::vector<struct Scripting::ModuleBinding>>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGIN
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPlugin();
#endif
    /**
     * @symbol ?hasErrors\@ScriptPlugin\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @symbol
     * ?reportErrors\@ScriptPlugin\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> reportErrors() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_loadScript\@ScriptPlugin\@\@AEAA?AV?$optional\@UScriptData\@Scripting\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::optional<struct Scripting::ScriptData> _loadScript(std::string const&);
    // NOLINTEND
};
