#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IDependencyLoader.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ScriptData; }
// clang-format on

class ScriptPlugin : public ::Scripting::IDependencyLoader {
public:
    // prevent constructor by default
    ScriptPlugin& operator=(ScriptPlugin const&);
    ScriptPlugin(ScriptPlugin const&);
    ScriptPlugin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptPlugin@@UEAA@XZ
    virtual ~ScriptPlugin();

    // vIndex: 1, symbol:
    // ?onLoadScript@ScriptPlugin@@UEAA?AV?$optional@UScriptData@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$optional@V?$vector@UModuleBinding@Scripting@@V?$allocator@UModuleBinding@Scripting@@@std@@@std@@@3@@Z
    virtual std::optional<struct Scripting::ScriptData>
    onLoadScript(std::string const& name, std::optional<std::vector<struct Scripting::ModuleBinding>>);

    // symbol:
    // ?getScriptFilePaths@ScriptPlugin@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getScriptFilePaths() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_loadScript@ScriptPlugin@@AEAA?AV?$optional@UScriptData@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::optional<struct Scripting::ScriptData> _loadScript(std::string const& fileName);

    // NOLINTEND
};
