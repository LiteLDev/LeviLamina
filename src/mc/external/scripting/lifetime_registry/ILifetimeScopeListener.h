#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class ILifetimeScopeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILifetimeScopeListener();

    // vIndex: 1
    virtual void
    onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;

    // vIndex: 2
    virtual void
    onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;

    // vIndex: 3
    virtual void
    onTrackObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;

    // vIndex: 4
    virtual void
    onUntrackObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;

    // vIndex: 5
    virtual void onObjectReducedToSingleOwner(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle) = 0;

    // vIndex: 6
    virtual void onObjectPromotedToMultipleOwners(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle) = 0;

    // vIndex: 7
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;

    // vIndex: 8
    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
