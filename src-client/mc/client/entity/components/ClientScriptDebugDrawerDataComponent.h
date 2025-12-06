#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DebugDrawerPacket;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void handlePacket(::DebugDrawerPacket const& packet);
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
