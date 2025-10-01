#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentRegistry.h"
#include "mc/scripting/modules/minecraft/block/IScriptBlockCustomComponentReader.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentEventTypes.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentEventMetadata.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockCustomComponentsComponent;
class BlockPos;
class BlockType;
class HashedString;
class IBlockSource;
class ScriptDeferredEventCoordinator;
class ScriptDeferredFlushTracker;
struct ServerScriptManagerEvents;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace BlockEvents { class BlockRandomTickLegacyEvent; }
namespace BlockEvents { class BlockStepOffEvent; }
namespace BlockEvents { class BlockStepOnEvent; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockCustomComponentsRegistry : public ::ScriptModuleMinecraft::IScriptBlockCustomComponentReader,
                                            public ::ScriptDeferredEventListener,
                                            public ::ScriptModuleMinecraft::ScriptCustomComponentRegistry {
public:
    // ScriptBlockCustomComponentsRegistry inner types declare
    // clang-format off
    struct ScriptBlockCustomComponentData;
    // clang-format on

    // ScriptBlockCustomComponentsRegistry inner types define
    struct ScriptBlockCustomComponentData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>   mUnkaac3ad;
        ::ll::UntypedStorage<8, 224> mUnk346989;
        ::ll::UntypedStorage<8, 40>  mUnk53a6c9;
        ::ll::UntypedStorage<1, 1>   mUnk9ffddb;
        ::ll::UntypedStorage<1, 1>   mUnk2b0f74;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScriptBlockCustomComponentData& operator=(ScriptBlockCustomComponentData const&);
        ScriptBlockCustomComponentData(ScriptBlockCustomComponentData const&);
        ScriptBlockCustomComponentData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setClosureData(
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
            ::Scripting::WeakLifetimeScope const&                          scope
        );

        MCNAPI ~ScriptBlockCustomComponentData();
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
    ::ll::UntypedStorage<8, 8>  mUnk8848d2;
    ::ll::UntypedStorage<8, 24> mUnk1fa307;
    ::ll::UntypedStorage<8, 24> mUnk61196d;
    ::ll::UntypedStorage<8, 64> mUnkb5c618;
    ::ll::UntypedStorage<8, 24> mUnkc6a9fb;
    ::ll::UntypedStorage<2, 2>  mUnk8db1d0;
    ::ll::UntypedStorage<8, 8>  mUnk542351;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsRegistry& operator=(ScriptBlockCustomComponentsRegistry const&);
    ScriptBlockCustomComponentsRegistry(ScriptBlockCustomComponentsRegistry const&);
    ScriptBlockCustomComponentsRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual void onPreFlushAfterEvents() /*override*/;

    // vIndex: 6
    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

    // vIndex: 10
    virtual void onPostFlushAfterEvents() /*override*/;

    // vIndex: 2
    virtual void _onScriptInitializationComplete() /*override*/;

    // vIndex: 1
    virtual void _onReload() /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockCustomComponentsRegistry() /*override*/;

    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForItem(
        ::IBlockSource const&                 region,
        ::BlockPos                            blockPos,
        ::std::string_view                    componentName,
        ::Scripting::WeakLifetimeScope const& scope
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentsRegistry(
        ::ServerScriptManagerEvents&                                  events,
        ::ScriptDeferredEventCoordinator&                             deferredEventCoordinator,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
    );

    MCNAPI void _bindComponentToCereal(
        ::HashedString const&                                               compName,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const& closures
    );

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    _componentRegistrationValidatorsCommon(
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>>> const&
                              compIt,
        ::HashedString const& name
    );

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    _componentReloadRegistrationValidators(
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>>> const&
                                                                            compIt,
        ::HashedString const&                                               name,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const& closures
    );

    MCNAPI void _registerBlockForEventing(
        ::BlockType&                                                             block,
        ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>> const& comps
    );

    MCNAPI void beforeOnPlayerPlace(::BlockEvents::BlockPlayerPlacingEvent& eventData) const;

    MCNAPI bool
    hasSubscriptionFor(::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes type, ::Block const& block) const;

    MCNAPI void onEntityFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent const& eventData) const;

    MCNAPI void onPlayerBreak(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    MCNAPI void onPlayerInteract(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCNAPI void onQueuedTick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;

    MCNAPI void onRandomTick(::BlockEvents::BlockRandomTickEvent const& eventData) const;

    MCNAPI void onRandomTickLegacy(::BlockEvents::BlockRandomTickLegacyEvent const& eventData) const;

    MCNAPI void onStepOff(::BlockEvents::BlockStepOffEvent const& eventData) const;

    MCNAPI void onStepOn(::BlockEvents::BlockStepOnEvent const& eventData) const;

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    tryRegisterCustomComponent(
        ::HashedString const&                                          name,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
        ::Scripting::WeakLifetimeScope const&                          scope
    );

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    tryRegisterCustomComponentV1(
        ::HashedString const&                                          name,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
        ::Scripting::WeakLifetimeScope const&                          scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface> const
    _getEventMetadata();

    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerScriptManagerEvents&                                  events,
        ::ScriptDeferredEventCoordinator&                             deferredEventCoordinator,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
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
    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $_onScriptInitializationComplete();

    MCNAPI void $_onReload();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    $tryGetCustomComponentParametersForItem(
        ::IBlockSource const&                 region,
        ::BlockPos                            blockPos,
        ::std::string_view                    componentName,
        ::Scripting::WeakLifetimeScope const& scope
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScriptDeferredEventListener();

    MCNAPI static void** $vftableForIScriptBlockCustomComponentReader();

    MCNAPI static void** $vftableForScriptCustomComponentRegistry();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
