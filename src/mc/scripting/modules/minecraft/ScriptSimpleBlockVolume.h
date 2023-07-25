#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolume {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSIMPLEBLOCKVOLUME
public:
    ScriptSimpleBlockVolume& operator=(ScriptSimpleBlockVolume const&) = delete;
    ScriptSimpleBlockVolume(ScriptSimpleBlockVolume const&)            = delete;
    ScriptSimpleBlockVolume()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptSimpleBlockVolume\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VSimpleBlockVolume\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class SimpleBlockVolume> bind();
};

}; // namespace ScriptModuleMinecraft
