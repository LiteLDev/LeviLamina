#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsSpeed {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4d8299;
    ::ll::UntypedStorage<8, 16> mUnka710cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsSpeed& operator=(ScriptSettingsSpeed const&);
    ScriptSettingsSpeed(ScriptSettingsSpeed const&);
    ScriptSettingsSpeed();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptPropsEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
