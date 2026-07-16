#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsAudio {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk695e63;
    ::ll::UntypedStorage<8, 16> mUnkd11ecb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsAudio& operator=(ScriptSettingsAudio const&);
    ScriptSettingsAudio(ScriptSettingsAudio const&);
    ScriptSettingsAudio();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptPropsEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
