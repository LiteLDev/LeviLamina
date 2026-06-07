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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindDayLightCycleEnum();

    MCNAPI static ::Scripting::EnumBinding bindGamePublishSettingEnum();

    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
