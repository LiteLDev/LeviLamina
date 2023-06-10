/**
 * @file  ScriptPluginPackSourceEnumerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPluginPackSourceEnumerator.
 *
 */
class ScriptPluginPackSourceEnumerator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINPACKSOURCEENUMERATOR
public:
    class ScriptPluginPackSourceEnumerator& operator=(class ScriptPluginPackSourceEnumerator const &) = delete;
    ScriptPluginPackSourceEnumerator(class ScriptPluginPackSourceEnumerator const &) = delete;
    ScriptPluginPackSourceEnumerator() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getPluginSources\@ScriptPluginPackSourceEnumerator\@\@UEBAAEBV?$vector\@V?$unique_ptr\@VIScriptPluginSource\@\@U?$default_delete\@VIScriptPluginSource\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VIScriptPluginSource\@\@U?$default_delete\@VIScriptPluginSource\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual std::vector<std::unique_ptr<class IScriptPluginSource>> const & getPluginSources() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINPACKSOURCEENUMERATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPluginPackSourceEnumerator();
#endif
    /**
     * @symbol ??0ScriptPluginPackSourceEnumerator\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VPackInstance\@\@V?$allocator\@VPackInstance\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI ScriptPluginPackSourceEnumerator(std::string const &, std::vector<class PackInstance> const &);

};
