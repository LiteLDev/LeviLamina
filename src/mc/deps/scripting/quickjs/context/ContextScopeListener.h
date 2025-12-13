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
    virtual ~ContextScopeListener() /*override*/ = default;

    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry) /*override*/;

    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry);

    MCNAPI void $onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
