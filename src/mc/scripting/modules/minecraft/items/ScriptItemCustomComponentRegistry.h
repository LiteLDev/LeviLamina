#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentRegistry.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentRegistry.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Item;
class ItemRegistryRef;
class ScriptDeferredEventCoordinator;
class ScriptDeferredEventListener;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentSignalCollection; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentRegistry : public ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry,
                                          public ::ScriptModuleMinecraft::ScriptCustomComponentRegistry {
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
        ::ll::UntypedStorage<1, 1>  mUnkd76e59;
        ::ll::UntypedStorage<8, 40> mUnkb7345a;
        ::ll::UntypedStorage<2, 2>  mUnk8e8194;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&);
        ComponentInfo(ComponentInfo const&);
        ComponentInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ComponentInfo();
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
    ::ll::UntypedStorage<8, 64> mUnk952d18;
    ::ll::UntypedStorage<8, 8>  mUnkdbb6de;
    ::ll::UntypedStorage<8, 16> mUnk58737c;
    ::ll::UntypedStorage<8, 16> mUnke262ca;
    ::ll::UntypedStorage<8, 8>  mUnke3cee5;
    ::ll::UntypedStorage<8, 24> mUnkfd49fe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentRegistry& operator=(ScriptItemCustomComponentRegistry const&);
    ScriptItemCustomComponentRegistry(ScriptItemCustomComponentRegistry const&);
    ScriptItemCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentRegistry() /*override*/;

    // vIndex: 1
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

    // vIndex: 2
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

    // vIndex: 1
    virtual ::std::vector<::std::string_view> getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
    ) const /*override*/;

    // vIndex: 2
    virtual bool isValidComponentForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName
    ) const /*override*/;

    // vIndex: 6
    virtual ::ScriptDeferredEventListener& getEventListener() /*override*/;

    // vIndex: 3
    virtual void onReload() /*override*/;

    // vIndex: 4
    virtual void onScriptInitializationComplete() /*override*/;

    // vIndex: 5
    virtual void onScriptModuleStartupComplete() /*override*/;

    // vIndex: 7
    virtual void setCerealContext(::cereal::ReflectionCtx& ctx) /*override*/;

    // vIndex: 1
    virtual void _onReload() /*override*/;

    // vIndex: 2
    virtual void _onScriptInitializationComplete() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemCustomComponentRegistry(
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::ItemRegistryRef                 itemRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&& signals
    );

    MCNAPI void _bindComponentToCereal(::HashedString const& compName);

    MCNAPI void _subscribeItemToComponents(::Item* item, ::std::unordered_set<::HashedString>& unusedComponents);

    MCNAPI void _subscribeItemsToComponents();

    MCNAPI ::Scripting::Result<
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
    MCNAPI void* $ctor(
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::ItemRegistryRef                 itemRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&& signals
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
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

    MCNAPI ::Scripting::Result<
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

    MCNAPI ::std::vector<::std::string_view> $getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
    ) const;

    MCNAPI bool $isValidComponentForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName
    ) const;

    MCNAPI ::ScriptDeferredEventListener& $getEventListener();

    MCNAPI void $onReload();

    MCNAPI void $onScriptInitializationComplete();

    MCNAPI void $onScriptModuleStartupComplete();

    MCNAPI void $setCerealContext(::cereal::ReflectionCtx& ctx);

    MCNAPI void $_onReload();

    MCNAPI void $_onScriptInitializationComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIScriptItemCustomComponentWriter();

    MCNAPI static void** $vftableForIScriptItemCustomComponentReader();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
