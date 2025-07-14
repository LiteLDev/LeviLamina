#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleDebugUtilities { class ScriptDebugShape; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDebugDrawer : public ::Scripting::WeakHandleFromThis<::ScriptModuleDebugUtilities::ScriptDebugDrawer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkefd6aa;
    ::ll::UntypedStorage<8, 8>  mUnk524c0d;
    ::ll::UntypedStorage<8, 8>  mUnkb2ed06;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugDrawer& operator=(ScriptDebugDrawer const&);
    ScriptDebugDrawer(ScriptDebugDrawer const&);
    ScriptDebugDrawer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addShape(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugShape> shape);

    MCNAPI void _removeAll();

    MCNAPI void
    _removeShape(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugShape> shape);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDebugDrawer>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level);
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
