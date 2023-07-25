#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

class IControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTSERVERUI_ICONTROL
public:
    IControl& operator=(IControl const&) = delete;
    IControl(IControl const&)            = delete;
    IControl()                           = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFTSERVERUI_ICONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IControl();
#endif
};

}; // namespace ScriptModuleMinecraftServerUI
