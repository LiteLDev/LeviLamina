#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ClosureAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke4d77a;
    ::ll::UntypedStorage<8, 8>  mUnk1d806b;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClosureAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClosureAny();

    MCAPI ClosureAny(::Scripting::ClosureAny const& rhs);

    MCAPI ClosureAny(::Scripting::ClosureAny&& rhs);

    MCAPI ClosureAny(
        ::Scripting::IRuntime*                                         runtime,
        ::Scripting::ContextId                                         contextId,
        ::Scripting::WeakLifetimeScope                                 scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::ClosureType> handle,
        ::Scripting::IObjectInspector*                                 inspector
    );

    MCAPI ::Scripting::ResultAny callGeneric(
        ::entt::meta_any*                       args,
        uint                                    argc,
        ::entt::meta_type                       expectedReturnType,
        ::std::optional<::Scripting::Privilege> privilege
    ) const;

    MCAPI bool compareTo(::Scripting::ClosureAny const& rhs) const;

    MCFOLD ::std::optional<::Scripting::TypedObjectHandle<::Scripting::ClosureType>> getClosureHandle() const;

    MCFOLD ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny const& rhs);

    MCFOLD ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny&& rhs);

    MCFOLD bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::Scripting::ClosureAny const& rhs);

    MCAPI void* $ctor(::Scripting::ClosureAny&& rhs);

    MCFOLD void* $ctor(
        ::Scripting::IRuntime*                                         runtime,
        ::Scripting::ContextId                                         contextId,
        ::Scripting::WeakLifetimeScope                                 scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::ClosureType> handle,
        ::Scripting::IObjectInspector*                                 inspector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
