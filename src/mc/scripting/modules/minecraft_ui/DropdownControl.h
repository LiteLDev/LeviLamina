#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft_ui/IControl.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class DropdownControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkc2cb70;
    ::ll::UntypedStorage<8, 24>  mUnk22da8d;
    ::ll::UntypedStorage<4, 8>   mUnk2a4364;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownControl& operator=(DropdownControl const&);
    DropdownControl(DropdownControl const&);
    DropdownControl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::Json::Value>
    buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const /*override*/;

    // vIndex: 0
    virtual ~DropdownControl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DropdownControl(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                label,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> options,
        ::std::optional<uint> defaultValueIndex
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                label,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> options,
        ::std::optional<uint> defaultValueIndex
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::Json::Value>
    $buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
