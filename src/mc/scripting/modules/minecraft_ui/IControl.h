#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

class IControl {

public:
    // prevent constructor by default
    IControl& operator=(IControl const&) = delete;
    IControl(IControl const&)            = delete;
    IControl()                           = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFTSERVERUI_ICONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IControl();
#endif
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
