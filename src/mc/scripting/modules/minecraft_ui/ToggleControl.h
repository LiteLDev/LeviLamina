#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_ui/IControl.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ToggleControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk4bedaa;
    ::ll::UntypedStorage<1, 2>   mUnke05b7d;
    ::ll::UntypedStorage<8, 224> mUnk18eab1;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleControl& operator=(ToggleControl const&);
    ToggleControl(ToggleControl const&);
    ToggleControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError>
    buildJson(::Player&, ::CurrentCmdVersion) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
