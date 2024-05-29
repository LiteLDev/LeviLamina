#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSource.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ScriptPluginPackSource : public ::IScriptPluginSource {
public:
    // prevent constructor by default
    ScriptPluginPackSource& operator=(ScriptPluginPackSource const&);
    ScriptPluginPackSource(ScriptPluginPackSource const&);
    ScriptPluginPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptPluginPackSource@@UEAA@XZ
    virtual ~ScriptPluginPackSource() = default;

    // vIndex: 1, symbol: ?getManifest@ScriptPluginPackSource@@UEAAAEBVPackManifest@@XZ
    virtual class PackManifest const& getManifest();

    // vIndex: 2, symbol:
    // ?enumerateScripts@ScriptPluginPackSource@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::vector<std::string> enumerateScripts(std::string const&);

    // vIndex: 3, symbol:
    // ?loadScript@ScriptPluginPackSource@@UEAA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::optional<std::string> loadScript(std::string const&);

    // vIndex: 4, symbol:
    // ?removeRootFromPath@ScriptPluginPackSource@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    virtual std::string removeRootFromPath(std::string const& path);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_removeRootFromPath@ScriptPluginPackSource@@AEAA?AVPath@Core@@AEBV23@@Z
    MCAPI class Core::Path _removeRootFromPath(class Core::Path const& pathIn);

    // NOLINTEND
};
