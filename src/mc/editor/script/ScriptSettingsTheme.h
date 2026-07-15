#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsTheme {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka9a9b3;
    ::ll::UntypedStorage<8, 16> mUnk59913a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsTheme& operator=(ScriptSettingsTheme const&);
    ScriptSettingsTheme(ScriptSettingsTheme const&);
    ScriptSettingsTheme();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptPropsEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
