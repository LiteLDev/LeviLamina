#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptItemEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMEVENT
public:
    ScriptItemEvent& operator=(ScriptItemEvent const&) = delete;
    ScriptItemEvent(ScriptItemEvent const&)            = delete;
    ScriptItemEvent()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMEVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemEvent();
#endif
};

}; // namespace ScriptModuleMinecraft
