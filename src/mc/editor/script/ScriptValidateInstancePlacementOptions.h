#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptValidateInstancePlacementOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 5>  mUnk83c8d7;
    ::ll::UntypedStorage<8, 40> mUnk133a12;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptValidateInstancePlacementOptions& operator=(ScriptValidateInstancePlacementOptions const&);
    ScriptValidateInstancePlacementOptions(ScriptValidateInstancePlacementOptions const&);
    ScriptValidateInstancePlacementOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
