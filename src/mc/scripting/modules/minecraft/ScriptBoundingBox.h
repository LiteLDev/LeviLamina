#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBoundingBox {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBOUNDINGBOX
public:
    ScriptBoundingBox& operator=(ScriptBoundingBox const&) = delete;
    ScriptBoundingBox(ScriptBoundingBox const&)            = delete;
    ScriptBoundingBox()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptBoundingBox\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VBoundingBox\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class BoundingBox> bind();
};

}; // namespace ScriptModuleMinecraft
