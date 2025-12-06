#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDebugUtilities { class ScriptDebugShape; }
namespace Scripting::RenderHelper { struct BasePrimitivePosition; }
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ClientScriptDebugShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleDebugUtilities::ScriptDebugShape>> shapeData;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::Scripting::RenderHelper::BasePrimitivePosition>>     renderPrimitive;
    ::ll::TypedStorage<1, 1, bool>                                                              dirty;
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
