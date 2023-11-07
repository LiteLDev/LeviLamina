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
    // ?getPluginSources@ScriptPluginPackSourceEnumerator@@UEBAAEBV?$vector@V?$unique_ptr@VIScriptPluginSource@@U?$default_delete@VIScriptPluginSource@@@std@@@std@@V?$allocator@V?$unique_ptr@VIScriptPluginSource@@U?$default_delete@VIScriptPluginSource@@@std@@@std@@@2@@std@@XZ
    virtual std::vector<std::unique_ptr<class IScriptPluginSource>> const& getPluginSources() const;

    // NOLINTEND
};
