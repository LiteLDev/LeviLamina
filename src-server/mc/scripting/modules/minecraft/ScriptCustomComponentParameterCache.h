#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameterCacheHandle; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class WeakLifetimeScope; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomComponentParameterCache {
public:
    // ScriptCustomComponentParameterCache inner types declare
    // clang-format off
    struct CachedHandle;
    struct ParameterCache;
    // clang-format on

    // ScriptCustomComponentParameterCache inner types define
    struct CachedHandle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk902597;
        ::ll::UntypedStorage<8, 32> mUnk109ec1;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedHandle& operator=(CachedHandle const&);
        CachedHandle(CachedHandle const&);
        CachedHandle();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CachedHandle();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ParameterCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk15aef4;
        ::ll::UntypedStorage<8, 32> mUnk6c3885;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParameterCache& operator=(ParameterCache const&);
        ParameterCache(ParameterCache const&);
        ParameterCache();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ParameterCache();
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
    ::ll::UntypedStorage<8, 64> mUnk1e3b07;
    ::ll::UntypedStorage<8, 16> mUnkaa734e;
    ::ll::UntypedStorage<8, 56> mUnkc76b21;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentParameterCache& operator=(ScriptCustomComponentParameterCache const&);
    ScriptCustomComponentParameterCache(ScriptCustomComponentParameterCache const&);
    ScriptCustomComponentParameterCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCustomComponentParameterCache(::ServerScriptManagerEvents& events);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    _getOrCreatePayload(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache& cache,
        ::Scripting::WeakLifetimeScope const&                                         scope
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    getOrCreateParameterPayload(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle const& handle,
        ::Scripting::WeakLifetimeScope const&                                     scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle
    registerParameterPayload(::cereal::DynamicValue const& payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents& events);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
