#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/scripting/Version.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentClosureFlags.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentRegistry.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Item;
class ScriptDeferredEventCoordinator;
class ScriptDeferredEventListener;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentSignalCollection; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace Scripting { class WeakLifetimeScope; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentRegistry : public ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry {
public:
    // ScriptItemCustomComponentRegistry inner types declare
    // clang-format off
    struct ComponentInfo;
    // clang-format on

    // ScriptItemCustomComponentRegistry inner types define
    struct ComponentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                                           mRegistered;
        ::ll::TypedStorage<8, 40, ::Scripting::Version>                                          mClosureFlagsVersion;
        ::ll::TypedStorage<2, 2, ::ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags> mClosureFlags;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ComponentInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::ScriptModuleMinecraft::ScriptItemCustomComponentRegistry::ComponentInfo>>
                                                                mKnownComponents;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mDeferredEventCoordinator;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>          mItemRegistry;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mItemRegistryInitSubscription;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&> mParameterCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>>
                                                                                   mSignals;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx>> mCerealContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentRegistry& operator=(ScriptItemCustomComponentRegistry const&);
    ScriptItemCustomComponentRegistry(ScriptItemCustomComponentRegistry const&);
    ScriptItemCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemCustomComponentRegistry() /*override*/;

    virtual ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponentV1(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;

    virtual ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponent(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;

    virtual ::std::vector<::std::string_view> getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
    ) const /*override*/;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName,
        ::Scripting::WeakLifetimeScope const&                                        scope
    ) const /*override*/;

    virtual ::ScriptDeferredEventListener& getEventListener() /*override*/;

    virtual void setCerealContext(::cereal::ReflectionCtx& ctx) /*override*/;

    virtual void _onReload() /*override*/;

    virtual void _onScriptInitializationComplete() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentRegistry(
        ::ServerScriptManagerEvents&      events,
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::ItemRegistryRef                 itemRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&& signals,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&                            parameterCache
    );

    MCAPI void _bindComponentToCereal(::HashedString const& compName);

    MCAPI void _subscribeItemToComponents(::Item* item, ::std::unordered_set<::HashedString>& unusedComponents);

    MCAPI void _subscribeItemsToComponents();

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    _tryRegisterComponent(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ServerScriptManagerEvents&      events,
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::ItemRegistryRef                 itemRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&& signals,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&                            parameterCache
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponentV1(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    $tryRegisterComponent(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );

    MCAPI ::std::vector<::std::string_view> $getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
    ) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    $tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName,
        ::Scripting::WeakLifetimeScope const&                                        scope
    ) const;

    MCFOLD ::ScriptDeferredEventListener& $getEventListener();

    MCAPI void $setCerealContext(::cereal::ReflectionCtx& ctx);

    MCAPI void $_onReload();

    MCAPI void $_onScriptInitializationComplete();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIScriptItemCustomComponentWriter();

    MCNAPI static void** $vftableForIScriptItemCustomComponentReader();

    MCNAPI static void** $vftableForScriptCustomComponentRegistry();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
