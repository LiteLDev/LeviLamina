#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/scripting/Version.h"
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
class BlockType;
class ScriptDeferredEventCoordinator;
class ScriptDeferredFlushTracker;
struct ServerScriptManagerEvents;
namespace BlockEvents { class ActorEvent; }
namespace BlockEvents { class BlockBreakEvent; }
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockNeighborChangedEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace BlockEvents { class BlockRandomTickLegacyEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
namespace BlockEvents { class BlockStateChangeEvent; }
namespace BlockEvents { class BlockStepOffEvent; }
namespace BlockEvents { class BlockStepOnEvent; }
namespace BlockEvents { class NamedTickEvent; }
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
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
        ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes, 16>>
            mEventsUsed;
        ::ll::TypedStorage<8, 320, ::std::optional<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface>>
                                                        mClosures;
        ::ll::TypedStorage<8, 40, ::Scripting::Version> mVersionBoundWith;
        ::ll::TypedStorage<1, 1, bool>                  mInitialized;
        ::ll::TypedStorage<1, 1, bool>                  mUsedByBlock;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setClosureData(
            ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&& closures,
            ::Scripting::WeakLifetimeScope const&                          scope
        );
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
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes, 16>>
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

    virtual ~ScriptBlockCustomComponentsRegistry() /*override*/ = default;

    virtual ::std::vector<::std::string_view> getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation
    ) const /*override*/;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForBlock(
        ::Block const&                        block,
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

    MCNAPI bool hasSubscriptionFor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes type,
        ::BlockCustomComponentsComponent const&                       customComponents
    ) const;

    MCNAPI void onActor(::BlockEvents::ActorEvent const& eventData) const;

    MCNAPI void onBlockStateChange(::BlockEvents::BlockStateChangeEvent const& eventData) const;

    MCNAPI void onBreak(::BlockEvents::BlockBreakEvent const& eventData) const;

    MCNAPI void onEntityFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCNAPI void onNamedTick(::BlockEvents::NamedTickEvent const& eventData) const;

    MCNAPI void onNeighborChanged(::BlockEvents::BlockNeighborChangedEvent const& eventData) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent const& eventData) const;

    MCNAPI void onPlayerBreak(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    MCNAPI void onPlayerInteract(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCNAPI void onQueuedTick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;

    MCNAPI void onRandomTick(::BlockEvents::BlockRandomTickEvent const& eventData) const;

    MCNAPI void onRandomTickLegacy(::BlockEvents::BlockRandomTickLegacyEvent const& eventData) const;

    MCNAPI void onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent const& eventData) const;

    MCNAPI void onStepOff(::BlockEvents::BlockStepOffEvent const& eventData) const;

    MCNAPI void onStepOn(::BlockEvents::BlockStepOnEvent const& eventData) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*
    tryGetRegisteredComponent(::HashedString const& name) const;

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

    MCNAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $_onScriptInitializationComplete();

    MCNAPI void $_onReload();

    MCNAPI ::std::vector<::std::string_view> $getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation
    ) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    $tryGetCustomComponentParametersForBlock(
        ::Block const&                        block,
        ::std::string_view                    componentName,
        ::Scripting::WeakLifetimeScope const& scope
    ) const;


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
