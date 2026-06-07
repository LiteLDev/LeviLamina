#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/ScriptValue.h"

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
    virtual ~PromiseAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PromiseAny(::Scripting::PromiseAny&& rhs);

    MCNAPI PromiseAny(::Scripting::PromiseAny const& rhs);

    MCNAPI PromiseAny(
        ::Scripting::IRuntime*                                                runtime,
        ::Scripting::ContextId                                                contextId,
        ::Scripting::WeakLifetimeScope                                        scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> const& promiseHandle
    );

    MCNAPI ::std::optional<::Scripting::TypedObjectHandle<::Scripting::PromiseType>> getPromiseHandle() const;

    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny&& rhs);

    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny const& rhs);

    MCNAPI ::Scripting::ResultAny rejectGeneric(::entt::meta_any& any) const;

    MCNAPI ::Scripting::ResultAny resolveGeneric(::entt::meta_any& any) const;

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::PromiseAny&& rhs);

    MCNAPI void* $ctor(::Scripting::PromiseAny const& rhs);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*                                                runtime,
        ::Scripting::ContextId                                                contextId,
        ::Scripting::WeakLifetimeScope                                        scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> const& promiseHandle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
