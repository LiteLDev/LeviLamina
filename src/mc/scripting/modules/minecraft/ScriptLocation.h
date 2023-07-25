#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptLocation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTLOCATION
public:
    ScriptLocation& operator=(ScriptLocation const&) = delete;
    ScriptLocation(ScriptLocation const&)            = delete;
    ScriptLocation()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptLocation\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VVec3\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class Vec3> bind();
    /**
     * @symbol
     * ?bind_V010\@ScriptLocation\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VVec3\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class Vec3> bind_V010();
};

}; // namespace ScriptModuleMinecraft
