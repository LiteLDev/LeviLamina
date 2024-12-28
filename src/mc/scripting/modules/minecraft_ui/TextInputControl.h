#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft_ui/IControl.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class TextInputControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk3be11b;
    ::ll::UntypedStorage<8, 216> mUnk2c44a9;
    ::ll::UntypedStorage<8, 224> mUnk422f53;
    // NOLINTEND

public:
    // prevent constructor by default
    TextInputControl& operator=(TextInputControl const&);
    TextInputControl(TextInputControl const&);
    TextInputControl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::Json::Value>
    buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const /*override*/;

    // vIndex: 0
    virtual ~TextInputControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextInputControl(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> placeholderText,
        ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> defaultValue
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> placeholderText,
        ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> defaultValue
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::Json::Value>
    $buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
