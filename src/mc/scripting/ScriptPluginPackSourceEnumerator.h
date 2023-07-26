#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptPluginPackSourceEnumerator {

public:
    // prevent constructor by default
    ScriptPluginPackSourceEnumerator& operator=(ScriptPluginPackSourceEnumerator const&) = delete;
    ScriptPluginPackSourceEnumerator(ScriptPluginPackSourceEnumerator const&)            = delete;
    ScriptPluginPackSourceEnumerator()                                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getPluginSources\@ScriptPluginPackSourceEnumerator\@\@UEBAAEBV?$vector\@V?$unique_ptr\@VIScriptPluginSource\@\@U?$default_delete\@VIScriptPluginSource\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VIScriptPluginSource\@\@U?$default_delete\@VIScriptPluginSource\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual std::vector<std::unique_ptr<class IScriptPluginSource>> const& getPluginSources() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINPACKSOURCEENUMERATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPluginPackSourceEnumerator(); // NOLINT
#endif
};
