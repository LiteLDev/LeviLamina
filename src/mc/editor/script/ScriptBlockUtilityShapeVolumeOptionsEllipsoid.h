#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityShapeVolumeOptionsEllipsoid
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityShapeVolumeOptionsEllipsoid> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk7fe030;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityShapeVolumeOptionsEllipsoid& operator=(ScriptBlockUtilityShapeVolumeOptionsEllipsoid const&);
    ScriptBlockUtilityShapeVolumeOptionsEllipsoid(ScriptBlockUtilityShapeVolumeOptionsEllipsoid const&);
    ScriptBlockUtilityShapeVolumeOptionsEllipsoid();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
