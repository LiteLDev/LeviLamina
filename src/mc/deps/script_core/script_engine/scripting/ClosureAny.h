#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

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
    // prevent constructor by default
    ClosureAny(ClosureAny const&);
    ClosureAny();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClosureAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClosureAny(
        ::Scripting::IRuntime*                                         runtime,
        ::Scripting::ContextId                                         contextId,
        ::Scripting::WeakLifetimeScope                                 scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::ClosureType> handle,
        ::Scripting::IObjectInspector*                                 inspector
    );

    MCNAPI ::Scripting::ResultAny _callGeneric(
        ::entt::meta_any*                       args,
        uint                                    argc,
        ::entt::meta_type const&                expectedReturnType,
        ::std::optional<::Scripting::Privilege> privilege
    ) const;

    MCNAPI bool compareTo(::Scripting::ClosureAny const& rhs) const;

    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny&& rhs);

    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny const& rhs);

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
