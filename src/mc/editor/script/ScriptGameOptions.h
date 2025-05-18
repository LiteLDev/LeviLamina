#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/editor/GameOptions.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/DaylightCycle.h"

namespace Editor::ScriptModule {

class ScriptGameOptions : public ::Editor::GameOptions {
public:
    // prevent constructor by default
    ScriptGameOptions& operator=(ScriptGameOptions const&);
    ScriptGameOptions(ScriptGameOptions const&);
    ScriptGameOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptGameOptions(::Editor::ScriptModule::ScriptGameOptions&&);

    MCNAPI ~ScriptGameOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<::DaylightCycle, ::DaylightCycle> bindDayLightCycleEnum();

    MCNAPI static ::Scripting::EnumBindingBuilder<::Social::GamePublishSetting, ::Social::GamePublishSetting>
    bindGamePublishSettingEnum();

    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptGameOptions> bindInterface();

    MCNAPI static ::Scripting::EnumBindingBuilder<::PlayerPermissionLevel, ::PlayerPermissionLevel>
    bindPlayerPermissionLevelEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptGameOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
