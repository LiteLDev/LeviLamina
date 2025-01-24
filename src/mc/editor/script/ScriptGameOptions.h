#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/GameOptions.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/DaylightCycle.h"

namespace Editor::ScriptModule {

class ScriptGameOptions : public ::Editor::GameOptions {
public:
    // prevent constructor by default
    ScriptGameOptions& operator=(ScriptGameOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptGameOptions(::Editor::ScriptModule::ScriptGameOptions&&);

    MCAPI ScriptGameOptions(::Editor::ScriptModule::ScriptGameOptions const&);

    MCAPI ~ScriptGameOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::DaylightCycle, ::DaylightCycle> bindDayLightCycleEnum();

    MCAPI static ::Scripting::EnumBindingBuilder<::Social::GamePublishSetting, ::Social::GamePublishSetting>
    bindGamePublishSettingEnum();

    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptGameOptions> bindInterface();

    MCAPI static ::Scripting::EnumBindingBuilder<::PlayerPermissionLevel, ::PlayerPermissionLevel>
    bindPlayerPermissionLevelEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptGameOptions&&);

    MCFOLD void* $ctor(::Editor::ScriptModule::ScriptGameOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
