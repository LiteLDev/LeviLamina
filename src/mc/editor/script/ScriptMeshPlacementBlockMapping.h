#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptMeshPlacementBlockMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkceda2d;
    ::ll::UntypedStorage<8, 32> mUnk847c03;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshPlacementBlockMapping& operator=(ScriptMeshPlacementBlockMapping const&);
    ScriptMeshPlacementBlockMapping(ScriptMeshPlacementBlockMapping const&);
    ScriptMeshPlacementBlockMapping();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
