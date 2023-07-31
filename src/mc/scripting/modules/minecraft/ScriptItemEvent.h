#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptItemEvent {

public:
    // prevent constructor by default
    ScriptItemEvent& operator=(ScriptItemEvent const&) = delete;
    ScriptItemEvent(ScriptItemEvent const&)            = delete;
    ScriptItemEvent()                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMEVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemEvent();
#endif
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
