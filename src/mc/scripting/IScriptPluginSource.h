#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptPluginSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISCRIPTPLUGINSOURCE
public:
    IScriptPluginSource& operator=(IScriptPluginSource const&) = delete;
    IScriptPluginSource(IScriptPluginSource const&)            = delete;
    IScriptPluginSource()                                      = delete;
#endif

public:
};
