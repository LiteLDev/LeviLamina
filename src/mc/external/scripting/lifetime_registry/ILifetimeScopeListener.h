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
    // prevent constructor by default
    ILifetimeScopeListener& operator=(ILifetimeScopeListener const&);
    ILifetimeScopeListener(ILifetimeScopeListener const&);
    ILifetimeScopeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILifetimeScopeListener();

    // vIndex: 1
    virtual void onMakeObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 2
    virtual void onDestroyObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 3
    virtual void onTrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 4
    virtual void onUntrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 5
    virtual void onObjectReducedToSingleOwner(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle
    ) = 0;

    // vIndex: 6
    virtual void onObjectPromotedToMultipleOwners(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle
    ) = 0;

    // vIndex: 7
    virtual void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry& registry) = 0;

    // vIndex: 8
    virtual void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
