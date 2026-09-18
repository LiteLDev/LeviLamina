#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityShapeVolumeOptionsPyramid
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityShapeVolumeOptionsPyramid> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnkbb78f5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityShapeVolumeOptionsPyramid& operator=(ScriptBlockUtilityShapeVolumeOptionsPyramid const&);
    ScriptBlockUtilityShapeVolumeOptionsPyramid(ScriptBlockUtilityShapeVolumeOptionsPyramid const&);
    ScriptBlockUtilityShapeVolumeOptionsPyramid();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
