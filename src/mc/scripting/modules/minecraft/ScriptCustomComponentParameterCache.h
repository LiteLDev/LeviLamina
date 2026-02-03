#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/scripting/JSON.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameterCacheHandle; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
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
        ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
        ::ll::TypedStorage<
            8,
            32,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters>>
            mCachedParameters;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CachedHandle();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ParameterCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::CachedHandle>>
                                                     mCachedScriptHandles;
        ::ll::TypedStorage<8, 32, ::Scripting::JSON> mPayload;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ParameterCache();
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
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint64, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache>>
                                                               mCache;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnReloadSubscription;
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache> mEmptyCache;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentParameterCache();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptCustomComponentParameterCache(::ServerScriptManagerEvents& events);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    _getOrCreatePayload(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache& cache,
        ::Scripting::WeakLifetimeScope const&                                         scope
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    getOrCreateParameterPayload(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle const& handle,
        ::Scripting::WeakLifetimeScope const&                                     scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle
    registerParameterPayload(::cereal::DynamicValue const& payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerScriptManagerEvents& events);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
