#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptTextPrimitive; }
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapeError; }
namespace ScriptModuleMinecraft { struct ScriptPrimitiveShapesDataComponent; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
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
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPrimitiveManager(::Scripting::WeakLifetimeScope, ::gsl::not_null<::ServerLevel*> level);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptPrimitiveShapeError, ::Scripting::EngineError>
    _addShape(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTextPrimitive> shape,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
    );

    MCAPI void _removeAll();

    MCAPI void _removeShape(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTextPrimitive> shape);

    MCAPI ~ScriptPrimitiveManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope, ::gsl::not_null<::ServerLevel*> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
