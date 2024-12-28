#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/ILifetimeScopeListener.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class HandleCounter : public ::Scripting::ILifetimeScopeListener {
public:
    // HandleCounter inner types declare
    // clang-format off
    struct TypeStats;
    // clang-format on

    // HandleCounter inner types define
    struct TypeStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk937371;
        ::ll::UntypedStorage<4, 4> mUnkdecf81;
        ::ll::UntypedStorage<4, 4> mUnk6fa479;
        ::ll::UntypedStorage<4, 4> mUnk4ffda2;
        ::ll::UntypedStorage<4, 4> mUnkee6fe6;
        ::ll::UntypedStorage<4, 4> mUnk3fa789;
        ::ll::UntypedStorage<4, 4> mUnkf6989c;
        ::ll::UntypedStorage<8, 8> mUnk745a02;
        ::ll::UntypedStorage<8, 8> mUnk273bf2;
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&);
        TypeStats(TypeStats const&);
        TypeStats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1aeee9;
    ::ll::UntypedStorage<8, 24> mUnk1d5b48;
    // NOLINTEND

public:
    // prevent constructor by default
    HandleCounter& operator=(HandleCounter const&);
    HandleCounter(HandleCounter const&);
    HandleCounter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onMakeObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const&,
        uint
    ) /*override*/;

    // vIndex: 2
    virtual void onDestroyObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const&,
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
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const&,
        uint
    ) /*override*/;

    // vIndex: 5
    virtual void onObjectReducedToSingleOwner(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle) /*override*/;

    // vIndex: 6
    virtual void
    onObjectPromotedToMultipleOwners(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle) /*override*/;

    // vIndex: 7
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) /*override*/;

    // vIndex: 8
    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) /*override*/;

    // vIndex: 0
    virtual ~HandleCounter() /*override*/;
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

    MCAPI void
    $onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    MCAPI void
    $onTrackObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    MCAPI void
    $onUntrackObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    MCAPI void $onObjectReducedToSingleOwner(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle);

    MCAPI void $onObjectPromotedToMultipleOwners(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle);

    MCAPI void $onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);

    MCAPI void $onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
    // NOLINTEND
};

} // namespace Scripting
