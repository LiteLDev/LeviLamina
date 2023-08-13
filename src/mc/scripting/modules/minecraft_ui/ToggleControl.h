#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/IControl.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ToggleControl : public ::ScriptModuleMinecraftServerUI::IControl {

public:
    // prevent constructor by default
    ToggleControl& operator=(ToggleControl const&) = delete;
    ToggleControl(ToggleControl const&)            = delete;
    ToggleControl()                                = delete;

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
    virtual class Json::Value getJson() const;
    /**
     * @symbol ??0ToggleControl\@ScriptModuleMinecraftServerUI\@\@QEAA\@VValue\@Json\@\@V?$optional\@_N\@std\@\@\@Z
     */
    MCAPI ToggleControl(class Json::Value, std::optional<bool>);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
