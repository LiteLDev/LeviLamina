#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/GameOptions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptGameOptions : public ::Editor::GameOptions {
public:
    // prevent constructor by default
    ScriptGameOptions& operator=(ScriptGameOptions const&);
    ScriptGameOptions(ScriptGameOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptGameOptions();

    MCNAPI ScriptGameOptions(::Editor::ScriptModule::ScriptGameOptions&&);

    MCNAPI ~ScriptGameOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindDayLightCycleEnum();

    MCNAPI static ::Scripting::EnumBinding bindGamePublishSettingEnum();

    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptGameOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
