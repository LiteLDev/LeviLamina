#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptValidatePlacedInstanceBoundsOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 5> mUnk9af025;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptValidatePlacedInstanceBoundsOptions& operator=(ScriptValidatePlacedInstanceBoundsOptions const&);
    ScriptValidatePlacedInstanceBoundsOptions(ScriptValidatePlacedInstanceBoundsOptions const&);
    ScriptValidatePlacedInstanceBoundsOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
