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

class ScriptPluginHandleCounter : public ::Scripting::ILifetimeScopeListener {
public:
    // ScriptPluginHandleCounter inner types declare
    // clang-format off
    struct TypeStats;
    // clang-format on

    // ScriptPluginHandleCounter inner types define
    struct TypeStats {
    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&);
        TypeStats(TypeStats const&);
        TypeStats();

    public:
        // NOLINTBEGIN
        // symbol: ??1TypeStats@ScriptPluginHandleCounter@@QEAA@XZ
        MCAPI ~TypeStats();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptPluginHandleCounter& operator=(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptPluginHandleCounter@@UEAA@XZ
    virtual ~ScriptPluginHandleCounter() = default;

    // vIndex: 1, symbol:
    // ?onMakeObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onMakeObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 2, symbol:
    // ?onDestroyObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onDestroyObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 3, symbol:
    // ?onTrackObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onTrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 4, symbol:
    // ?onUntrackObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void onUntrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 5, symbol:
    // ?onObjectReducedToSingleOwner@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@@Z
    virtual void onObjectReducedToSingleOwner(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle);

    // vIndex: 6, symbol:
    // ?onObjectPromotedToMultipleOwners@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@@Z
    virtual void onObjectPromotedToMultipleOwners(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle);

    // vIndex: 7, symbol: ?onPreLifetimeScopeDestroy@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@@Z
    virtual void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // vIndex: 8, symbol: ?onPostLifetimeScopeDestroy@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@@Z
    virtual void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getOrMakeStats@ScriptPluginHandleCounter@@AEAAPEAUTypeStats@1@AEBVmeta_type@entt@@@Z
    MCAPI struct ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(entt::meta_type const& type);

    // NOLINTEND
};
