#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/ILifetimeScopeListener.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
// clang-format on

namespace Scripting::QuickJS {

class ContextScopeListener : public ::Scripting::ILifetimeScopeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1aace1;
    ::ll::UntypedStorage<8, 8>  mUnkad91a9;
    ::ll::UntypedStorage<8, 24> mUnk990f72;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextScopeListener& operator=(ContextScopeListener const&);
    ContextScopeListener(ContextScopeListener const&);
    ContextScopeListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContextScopeListener() /*override*/ = default;

    // vIndex: 1
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry) /*override*/;

    // vIndex: 2
    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry);

    MCAPI void $onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
