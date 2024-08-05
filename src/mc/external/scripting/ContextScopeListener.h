#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ILifetimeScopeListener.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ILifetimeScopeListener; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting::QuickJS {

class ContextScopeListener : public ::Scripting::ILifetimeScopeListener {
public:
    // prevent constructor by default
    ContextScopeListener& operator=(ContextScopeListener const&);
    ContextScopeListener(ContextScopeListener const&);
    ContextScopeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContextScopeListener() = default;

    // vIndex: 1
    virtual void
    onMakeObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // vIndex: 2
    virtual void onDestroyObject(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle,
        entt::meta_type const&             type,
        uint
    );

    // vIndex: 3
    virtual void
    onTrackObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // vIndex: 4
    virtual void onUntrackObject(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle,
        entt::meta_type const&             type,
        uint
    );

    // vIndex: 5
    virtual void
    onObjectReducedToSingleOwner(class Scripting::LifetimeRegistry& registry, struct Scripting::ObjectHandle handle);

    // vIndex: 6
    virtual void onObjectPromotedToMultipleOwners(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle
    );

    // vIndex: 7
    virtual void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry& registry);

    // vIndex: 8
    virtual void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
