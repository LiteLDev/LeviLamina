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

class SliderControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkd9ccf7;
    ::ll::UntypedStorage<4, 4> mUnkf5463a;
    ::ll::UntypedStorage<4, 4> mUnk5faac6;
    ::ll::UntypedStorage<4, 8> mUnka37abf;
    ::ll::UntypedStorage<4, 8> mUnkc29b0a;
    ::ll::UntypedStorage<8, 224> mUnk28c3fe;
    // NOLINTEND

public:
    // prevent constructor by default
    SliderControl& operator=(SliderControl const&);
    SliderControl(SliderControl const&);
    SliderControl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError> buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const /*override*/;

    // vIndex: 0
    virtual ~SliderControl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SliderControl(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label, float minValue, float maxValue, ::std::optional<float> step, ::std::optional<int> defaultValue, ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> tooltip);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label, float minValue, float maxValue, ::std::optional<float> step, ::std::optional<int> defaultValue, ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> tooltip);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError> $buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
