#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSourceEnumerator.h"

class ScriptPluginPackSourceEnumerator : public ::IScriptPluginSourceEnumerator {
public:
    // prevent constructor by default
    ScriptPluginPackSourceEnumerator& operator=(ScriptPluginPackSourceEnumerator const&);
    ScriptPluginPackSourceEnumerator(ScriptPluginPackSourceEnumerator const&);
    ScriptPluginPackSourceEnumerator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptPluginPackSourceEnumerator@@UEAA@XZ
    virtual ~ScriptPluginPackSourceEnumerator();

    // vIndex: 1, symbol:
    // ?getPluginSources@ScriptPluginPackSourceEnumerator@@UEBAAEBV?$vector@V?$shared_ptr@VIScriptPluginSource@@@std@@V?$allocator@V?$shared_ptr@VIScriptPluginSource@@@std@@@2@@std@@XZ
    virtual std::vector<std::shared_ptr<class IScriptPluginSource>> const& getPluginSources() const;

    // symbol:
    // ??0ScriptPluginPackSourceEnumerator@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@2@@Z
    MCAPI ScriptPluginPackSourceEnumerator(std::string const&, std::vector<class PackInstance> const& packStack);

    // NOLINTEND
};
