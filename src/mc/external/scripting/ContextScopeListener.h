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
    // vIndex: 0, symbol: __gen_??1ContextScopeListener@QuickJS@Scripting@@UEAA@XZ
    virtual ~ContextScopeListener() = default;

    // vIndex: 1, symbol:
    // ?onMakeObject@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void
    onMakeObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // vIndex: 2, symbol:
    // ?onDestroyObject@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onDestroyObject(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle,
        entt::meta_type const&             type,
        uint
    );

    // vIndex: 3, symbol:
    // ?onTrackObject@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void
    onTrackObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // vIndex: 4, symbol:
    // ?onUntrackObject@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onUntrackObject(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle,
        entt::meta_type const&             type,
        uint
    );

    // vIndex: 5, symbol:
    // ?onObjectReducedToSingleOwner@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@@Z
    virtual void
    onObjectReducedToSingleOwner(class Scripting::LifetimeRegistry& registry, struct Scripting::ObjectHandle handle);

    // vIndex: 6, symbol:
    // ?onObjectPromotedToMultipleOwners@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@@Z
    virtual void onObjectPromotedToMultipleOwners(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle
    );

    // vIndex: 7, symbol:
    // ?onPreLifetimeScopeDestroy@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@@Z
    virtual void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry& registry);

    // vIndex: 8, symbol:
    // ?onPostLifetimeScopeDestroy@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@@Z
    virtual void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
