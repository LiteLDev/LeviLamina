#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/ILifetimeScopeListener.h"

// auto generated forward declare list
// clang-format off
class ScriptPlugin;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk5275d3;
        ::ll::UntypedStorage<8, 8>  mUnk70abe5;
        ::ll::UntypedStorage<1, 1>  mUnkc4270a;
        ::ll::UntypedStorage<4, 4>  mUnkd4cd85;
        ::ll::UntypedStorage<4, 4>  mUnk6d6437;
        ::ll::UntypedStorage<4, 4>  mUnkbf890e;
        ::ll::UntypedStorage<4, 4>  mUnk33b8bd;
        ::ll::UntypedStorage<4, 4>  mUnk971dd2;
        ::ll::UntypedStorage<4, 4>  mUnkaa4c8a;
        ::ll::UntypedStorage<8, 8>  mUnk5cb9a0;
        ::ll::UntypedStorage<8, 8>  mUnk6dc587;
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&);
        TypeStats(TypeStats const&);
        TypeStats();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TypeStats();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb0d518;
    ::ll::UntypedStorage<8, 64> mUnkbc6a55;
    ::ll::UntypedStorage<8, 24> mUnka4a8db;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginHandleCounter& operator=(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onMakeObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    ) /*override*/;

    // vIndex: 2
    virtual void onDestroyObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    ) /*override*/;

    // vIndex: 3
    virtual void onTrackObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    ) /*override*/;

    // vIndex: 4
    virtual void onUntrackObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
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
    virtual ~ScriptPluginHandleCounter() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPluginHandleCounter(::ScriptPlugin& plug);

    MCAPI ::ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(::entt::meta_type const& type);

    MCAPI ::std::string getName() const;

    MCAPI ::ScriptPlugin& getScriptPlugin();

    MCAPI ::ScriptPluginHandleCounter::TypeStats const* getStatsById(uint id) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptPlugin& plug);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const& type, uint size);

    MCAPI void $onDestroyObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    );

    MCAPI void
    $onTrackObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const& type, uint size);

    MCAPI void $onUntrackObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    );

    MCAPI void $onObjectReducedToSingleOwner(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle);

    MCAPI void $onObjectPromotedToMultipleOwners(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle);

    MCAPI void $onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);

    MCAPI void $onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
