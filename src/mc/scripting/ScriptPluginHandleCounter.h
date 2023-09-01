#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

class ScriptPluginHandleCounter {
public:
    // ScriptPluginHandleCounter inner types declare
    // clang-format off
    struct TypeStats;
    // clang-format on

    // ScriptPluginHandleCounter inner types define
    struct TypeStats {
    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&) = delete;
        TypeStats(TypeStats const&)            = delete;
        TypeStats()                            = delete;

    public:
        // NOLINTBEGIN
        // symbol: ??1TypeStats@ScriptPluginHandleCounter@@QEAA@XZ
        MCAPI ~TypeStats();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptPluginHandleCounter& operator=(ScriptPluginHandleCounter const&) = delete;
    ScriptPluginHandleCounter(ScriptPluginHandleCounter const&)            = delete;
    ScriptPluginHandleCounter()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onMakeObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void
    onMakeObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // vIndex: 2, symbol:
    // ?onDestroyObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void
    onDestroyObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // vIndex: 3, symbol:
    // ?onTrackObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void
    onTrackObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // vIndex: 4, symbol:
    // ?onUntrackObject@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@AEBVmeta_type@entt@@I@Z
    virtual void
    onUntrackObject(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle, entt::meta_type const&, uint);

    // symbol:
    // ?onObjectPromotedToMultipleOwners@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@@Z
    MCVAPI void onObjectPromotedToMultipleOwners(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle);

    // symbol:
    // ?onObjectReducedToSingleOwner@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@UObjectHandle@3@@Z
    MCVAPI void onObjectReducedToSingleOwner(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle);

    // symbol: ?onPostLifetimeScopeDestroy@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@@Z
    MCVAPI void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // symbol: ?onPreLifetimeScopeDestroy@ScriptPluginHandleCounter@@UEAAXAEAVLifetimeRegistry@Scripting@@@Z
    MCVAPI void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getOrMakeStats@ScriptPluginHandleCounter@@AEAAPEAUTypeStats@1@AEBVmeta_type@entt@@@Z
    MCAPI struct ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(entt::meta_type const&);

    // NOLINTEND
};
