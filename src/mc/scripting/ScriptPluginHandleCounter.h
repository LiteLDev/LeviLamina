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
    // vIndex: 0
    virtual ~ScriptPluginHandleCounter() = default;

    // vIndex: 1
    virtual void onMakeObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 2
    virtual void onDestroyObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 3
    virtual void onTrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 4
    virtual void onUntrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        entt::meta_type const& type,
        uint                   size
    );

    // vIndex: 5
    virtual void onObjectReducedToSingleOwner(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle);

    // vIndex: 6
    virtual void onObjectPromotedToMultipleOwners(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle);

    // vIndex: 7
    virtual void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // vIndex: 8
    virtual void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(entt::meta_type const& type);

    // NOLINTEND
};
