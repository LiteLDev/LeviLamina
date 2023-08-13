#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class IControl {

public:
    // prevent constructor by default
    IControl& operator=(IControl const&) = delete;
    IControl(IControl const&)            = delete;
    IControl()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJson\@ToggleControl\@ScriptModuleMinecraftServerUI\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value getJson() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFTSERVERUI_ICONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IControl();
#endif
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
