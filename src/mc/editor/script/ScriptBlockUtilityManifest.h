#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptBlockUtilityManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3b2f3f;
    ::ll::UntypedStorage<8, 24> mUnkd9ed50;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityManifest& operator=(ScriptBlockUtilityManifest const&);
    ScriptBlockUtilityManifest(ScriptBlockUtilityManifest const&);
    ScriptBlockUtilityManifest();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
