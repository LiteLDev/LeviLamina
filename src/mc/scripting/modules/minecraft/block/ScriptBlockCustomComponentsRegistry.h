#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/scripting/Version.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentRegistry.h"
#include "mc/scripting/modules/minecraft/block/IScriptBlockCustomComponentReader.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentEventTypes.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentInterface.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentAfterEventList.h"
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
namespace BlockEvents { class BlockBreakEvent; }
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace BlockEvents { class BlockRandomTickLegacyEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
namespace BlockEvents { class BlockStepOffEvent; }
namespace BlockEvents { class BlockStepOnEvent; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace cereal { struct ReflectionCtx; }
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
        ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes, 12>>
            mEventsUsed;
        ::ll::TypedStorage<8, 256, ::std::optional<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface>>
                                                        mClosures;
        ::ll::TypedStorage<8, 40, ::Scripting::Version> mVersionBoundWith;
        ::ll::TypedStorage<1, 1, bool>                  mInitialized;
        ::ll::TypedStorage<1, 1, bool>                  mUsedByBlock;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void setClosureData(
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
            ::Scripting::WeakLifetimeScope const&                          scope
        );

        MCAPI ~ScriptBlockCustomComponentData();
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
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&>                    mDeferredEventCoordinator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>      mBlockSubscriptions;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>
                                                                                            mComponents;
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptCustomComponentAfterEventList> mAsyncEventQueues;
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes, 12>>
        mV1EventSubscriptionList;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&>
        mCustomComponentParameterCache;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsRegistry& operator=(ScriptBlockCustomComponentsRegistry const&);
    ScriptBlockCustomComponentsRegistry(ScriptBlockCustomComponentsRegistry const&);
    ScriptBlockCustomComponentsRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onPreFlushAfterEvents() /*override*/;

    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

    virtual void onPostFlushAfterEvents() /*override*/;

    virtual void _onScriptInitializationComplete() /*override*/;

    virtual void _onReload() /*override*/;

    virtual ~ScriptBlockCustomComponentsRegistry() /*override*/;

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
    MCAPI ScriptBlockCustomComponentsRegistry(
        ::ServerScriptManagerEvents&                                  events,
        ::ScriptDeferredEventCoordinator&                             deferredEventCoordinator,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
    );

    MCAPI void _bindComponentToCereal(
        ::HashedString const&                                               compName,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const& closures
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    _componentRegistrationValidators(
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>>> const&
                              compIt,
        ::HashedString const& name
    );

    MCAPI ::Scripting::Result<
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

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentReloadNewComponentError>
    _componentRegistrationValidatorsV1(
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry::ScriptBlockCustomComponentData>>>> const&
                                                                            compIt,
        ::HashedString const&                                               name,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const& closures
    );

    MCAPI ::Scripting::Result<
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

    MCAPI void _registerBlockForEventing(
        ::BlockType&                                                             block,
        ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>> const& comps
    );

    MCAPI void beforeOnPlayerPlace(::BlockEvents::BlockPlayerPlacingEvent& eventData) const;

    MCAPI bool
    hasSubscriptionFor(::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes type, ::Block const& block) const;

    MCAPI bool hasSubscriptionFor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes type,
        ::BlockCustomComponentsComponent const&                       customComponents
    ) const;

    MCAPI void onBreak(::BlockEvents::BlockBreakEvent const& eventData) const;

    MCAPI void onEntityFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent const& eventData) const;

    MCAPI void onPlayerBreak(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    MCAPI void onPlayerInteract(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void onQueuedTick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;

    MCAPI void onRandomTick(::BlockEvents::BlockRandomTickEvent const& eventData) const;

    MCAPI void onRandomTickLegacy(::BlockEvents::BlockRandomTickLegacyEvent const& eventData) const;

    MCAPI void onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent const& eventData) const;

    MCAPI void onStepOff(::BlockEvents::BlockStepOffEvent const& eventData) const;

    MCAPI void onStepOn(::BlockEvents::BlockStepOnEvent const& eventData) const;

    MCAPI ::Scripting::Result<
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

    MCAPI ::Scripting::Result<
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
    MCAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface> const
    _getEventMetadata();

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ServerScriptManagerEvents&                                  events,
        ::ScriptDeferredEventCoordinator&                             deferredEventCoordinator,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
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
    MCAPI void $onPreFlushAfterEvents();

    MCAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void $onPostFlushAfterEvents();

    MCAPI void $_onScriptInitializationComplete();

    MCAPI void $_onReload();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
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
