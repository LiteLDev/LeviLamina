#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/ILifetimeScopeListener.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
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
    virtual ~ContextScopeListener() /*override*/;

    // vIndex: 1
    virtual void onMakeObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const&,
        uint
    ) /*override*/;

    // vIndex: 2
    virtual void onDestroyObject(
        ::Scripting::LifetimeRegistry& registry,
        ::Scripting::ObjectHandle      handle,
        ::entt::meta_type const&       type,
        uint
    ) /*override*/;

    // vIndex: 3
    virtual void onTrackObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const&,
        uint
    ) /*override*/;

    // vIndex: 4
    virtual void onUntrackObject(
        ::Scripting::LifetimeRegistry& registry,
        ::Scripting::ObjectHandle      handle,
        ::entt::meta_type const&       type,
        uint
    ) /*override*/;

    // vIndex: 5
    virtual void onObjectReducedToSingleOwner(
        ::Scripting::LifetimeRegistry& registry,
        ::Scripting::ObjectHandle      handle
    ) /*override*/;

    // vIndex: 6
    virtual void onObjectPromotedToMultipleOwners(
        ::Scripting::LifetimeRegistry& registry,
        ::Scripting::ObjectHandle      handle
    ) /*override*/;

    // vIndex: 7
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry) /*override*/;

    // vIndex: 8
    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    MCAPI void $onDestroyObject(
        ::Scripting::LifetimeRegistry& registry,
        ::Scripting::ObjectHandle      handle,
        ::entt::meta_type const&       type,
        uint
    );

    MCAPI void
    $onTrackObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    MCAPI void $onUntrackObject(
        ::Scripting::LifetimeRegistry& registry,
        ::Scripting::ObjectHandle      handle,
        ::entt::meta_type const&       type,
        uint
    );

    MCAPI void $onObjectReducedToSingleOwner(::Scripting::LifetimeRegistry& registry, ::Scripting::ObjectHandle handle);

    MCAPI void
    $onObjectPromotedToMultipleOwners(::Scripting::LifetimeRegistry& registry, ::Scripting::ObjectHandle handle);

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
