#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft_ui/IControl.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ToggleControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk1d829b;
    ::ll::UntypedStorage<1, 2>   mUnke05b7d;
    ::ll::UntypedStorage<8, 224> mUnk5f1360;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleControl& operator=(ToggleControl const&);
    ToggleControl(ToggleControl const&);
    ToggleControl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError>
    buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const /*override*/;

    // vIndex: 0
    virtual ~ToggleControl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ToggleControl(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                  label,
        ::std::optional<bool>                                                                              defaultValue,
        ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> tooltip
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                  label,
        ::std::optional<bool>                                                                              defaultValue,
        ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> tooltip
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError>
    $buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
