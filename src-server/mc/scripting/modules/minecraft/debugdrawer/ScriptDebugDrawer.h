#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleDebugUtilities { class ScriptDebugShape; }
namespace ScriptModuleDebugUtilities { struct ScriptDebugDrawerDataComponent; }
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
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                               mScope;
    ::ll::TypedStorage<8, 8, ::ServerLevel&>                                                mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleDebugUtilities::ScriptDebugDrawerDataComponent*> mDataComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugDrawer& operator=(ScriptDebugDrawer const&);
    ScriptDebugDrawer(ScriptDebugDrawer const&);
    ScriptDebugDrawer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addShape(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugShape> shape);

    MCAPI void _removeAll();

    MCAPI void _removeShape(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugShape> shape);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugDrawer>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level);
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
