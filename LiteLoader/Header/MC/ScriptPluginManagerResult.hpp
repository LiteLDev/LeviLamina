// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptPluginManagerResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINMANAGERRESULT
public:
    class ScriptPluginManagerResult& operator=(class ScriptPluginManagerResult const &) = delete;
    ScriptPluginManagerResult(class ScriptPluginManagerResult const &) = delete;
    ScriptPluginManagerResult() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINMANAGERRESULT
public:
#endif
    MCAPI class ScriptPluginResult & getOrCreatePluginResults(struct Scripting::ModuleDescriptor const &);
    MCAPI void writeToContentLog() const;
    MCAPI ~ScriptPluginManagerResult();



};