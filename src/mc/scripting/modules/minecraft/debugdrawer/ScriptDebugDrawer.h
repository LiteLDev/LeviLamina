#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapesDataComponent; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDebugDrawer : public ::Scripting::WeakHandleFromThis<::ScriptModuleDebugUtilities::ScriptDebugDrawer> {
public:
    // ScriptDebugDrawer inner types define
    using Key = int64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                              mScope;
    ::ll::TypedStorage<8, 8, ::ServerLevel&>                                               mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptPrimitiveShapesDataComponent*> mDataComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugDrawer& operator=(ScriptDebugDrawer const&);
    ScriptDebugDrawer(ScriptDebugDrawer const&);
    ScriptDebugDrawer();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugDrawer>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level);
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
