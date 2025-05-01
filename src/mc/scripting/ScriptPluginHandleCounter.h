#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/ILifetimeObjectListener.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

class ScriptPluginHandleCounter : public ::Scripting::ILifetimeObjectListener {
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
        MCNAPI ~TypeStats();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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

    // vIndex: 0
    virtual ~ScriptPluginHandleCounter() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(::entt::meta_type const& type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const& type, uint size);

    MCNAPI void $onDestroyObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
