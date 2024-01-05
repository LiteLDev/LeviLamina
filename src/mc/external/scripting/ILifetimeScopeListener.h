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
    // vIndex: 0, symbol: ??1ILifetimeScopeListener@Scripting@@UEAA@XZ
    virtual ~ILifetimeScopeListener();

    // vIndex: 1, symbol:
    // ?onMakeObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onMakeObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 2, symbol:
    // ?onDestroyObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onDestroyObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 3, symbol:
    // ?onTrackObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onTrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 4, symbol:
    // ?onUntrackObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onUntrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    ) = 0;

    // vIndex: 5, symbol:
    // ?onObjectReducedToSingleOwner@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@@Z
    virtual void onObjectReducedToSingleOwner(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle
    ) = 0;

    // vIndex: 6, symbol:
    // ?onObjectPromotedToMultipleOwners@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@UObjectHandle@3@@Z
    virtual void onObjectPromotedToMultipleOwners(
        class Scripting::LifetimeRegistry& registry,
        struct Scripting::ObjectHandle     handle
    ) = 0;

    // vIndex: 7, symbol:
    // ?onPreLifetimeScopeDestroy@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@@Z
    virtual void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry& registry) = 0;

    // vIndex: 8, symbol:
    // ?onPostLifetimeScopeDestroy@ContextScopeListener@QuickJS@Scripting@@UEAAXAEAVLifetimeRegistry@3@@Z
    virtual void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&) = 0;

    // NOLINTEND
};

}; // namespace Scripting
