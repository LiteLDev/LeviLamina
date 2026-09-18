#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityShapeVolumeOptionsCylinder
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityShapeVolumeOptionsCylinder> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk607513;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityShapeVolumeOptionsCylinder& operator=(ScriptBlockUtilityShapeVolumeOptionsCylinder const&);
    ScriptBlockUtilityShapeVolumeOptionsCylinder(ScriptBlockUtilityShapeVolumeOptionsCylinder const&);
    ScriptBlockUtilityShapeVolumeOptionsCylinder();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
