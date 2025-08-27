#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDebugUtilities { struct ClientScriptDebugShape; }
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ClientScriptDebugDrawerDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleDebugUtilities::ClientScriptDebugShape>> mShapes;
    ::ll::TypedStorage<1, 1, bool>                                                                 mDirty;
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
