#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityShapeVolumeOptionsCuboid
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityShapeVolumeOptionsCuboid> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnkcae4dd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityShapeVolumeOptionsCuboid& operator=(ScriptBlockUtilityShapeVolumeOptionsCuboid const&);
    ScriptBlockUtilityShapeVolumeOptionsCuboid(ScriptBlockUtilityShapeVolumeOptionsCuboid const&);
    ScriptBlockUtilityShapeVolumeOptionsCuboid();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
