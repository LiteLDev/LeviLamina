#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting {

class PromiseAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc023ba;
    // NOLINTEND

public:
    // prevent constructor by default
    PromiseAny();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PromiseAny() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PromiseAny(::Scripting::PromiseAny&& rhs);

    MCAPI PromiseAny(::Scripting::PromiseAny const& rhs);

    MCAPI PromiseAny(
        ::Scripting::IRuntime*                                                runtime,
        ::Scripting::ContextId                                                contextId,
        ::Scripting::WeakLifetimeScope                                        scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> const& promiseHandle
    );

    MCFOLD ::std::optional<::Scripting::TypedObjectHandle<::Scripting::PromiseType>> getPromiseHandle() const;

    MCFOLD ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny&& rhs);

    MCFOLD ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny const& rhs);

    MCAPI ::Scripting::ResultAny rejectGeneric(::entt::meta_any& any) const;

    MCAPI ::Scripting::ResultAny resolveGeneric(::entt::meta_any& any) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::PromiseAny&& rhs);

    MCFOLD void* $ctor(::Scripting::PromiseAny const& rhs);

    MCFOLD void* $ctor(
        ::Scripting::IRuntime*                                                runtime,
        ::Scripting::ContextId                                                contextId,
        ::Scripting::WeakLifetimeScope                                        scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> const& promiseHandle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
