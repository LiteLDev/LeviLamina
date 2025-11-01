#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptSelectionContainerVolumeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc08079;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionContainerVolumeEvent& operator=(ScriptSelectionContainerVolumeEvent const&);
    ScriptSelectionContainerVolumeEvent(ScriptSelectionContainerVolumeEvent const&);
    ScriptSelectionContainerVolumeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptEventTypeEnum();
    // NOLINTEND

};

}
