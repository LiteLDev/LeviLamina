#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapesDataComponent; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPrimitiveManager : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptPrimitiveManager> {
public:
    // ScriptPrimitiveManager inner types define
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
    ScriptPrimitiveManager& operator=(ScriptPrimitiveManager const&);
    ScriptPrimitiveManager(ScriptPrimitiveManager const&);
    ScriptPrimitiveManager();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
