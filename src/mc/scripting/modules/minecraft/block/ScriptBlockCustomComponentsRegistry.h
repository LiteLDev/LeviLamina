#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnumBitset.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentRegistry.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentEventTypes.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentEventMetadata.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockCustomComponentsComponent;
class BlockLegacy;
class HashedString;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace BlockEvents { class BlockStepOffEvent; }
namespace BlockEvents { class BlockStepOnEvent; }
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockCustomComponentsRegistry : public ::ScriptDeferredEventListener,
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
        ::ll::UntypedStorage<4, 4>   mUnk3b457e;
        ::ll::UntypedStorage<8, 208> mUnk346989;
        ::ll::UntypedStorage<8, 40>  mUnk53a6c9;
        ::ll::UntypedStorage<1, 1>   mUnk9ffddb;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScriptBlockCustomComponentData& operator=(ScriptBlockCustomComponentData const&);
        ScriptBlockCustomComponentData(ScriptBlockCustomComponentData const&);
        ScriptBlockCustomComponentData();

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
    ::ll::UntypedStorage<8, 24> mUnk1fa307;
    ::ll::UntypedStorage<8, 24> mUnk61196d;
    ::ll::UntypedStorage<8, 64> mUnkb5c618;
    ::ll::UntypedStorage<8, 24> mUnk9d5cb6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsRegistry& operator=(ScriptBlockCustomComponentsRegistry const&);
    ScriptBlockCustomComponentsRegistry(ScriptBlockCustomComponentsRegistry const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual void onPreFlushAfterEvents() /*override*/;

    // vIndex: 5
    virtual bool onFlushBlockCustomComponentAfterEvents() /*override*/;

    // vIndex: 9
    virtual void onPostFlushAfterEvents() /*override*/;

    // vIndex: 2
    virtual void _onScriptInitializationComplete() /*override*/;

    // vIndex: 1
    virtual void _onReload() /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockCustomComponentsRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentsRegistry();

    MCAPI bool _checkDifferentEventRegistered(
        ::EnumBitset<::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes, 9> const& originalSet,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&                   newSet
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
        ::BlockLegacy&                                                           block,
        ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>> const& comps
    );

    MCAPI void _validateBlockQueuedTickingComponentPresentWithClosure(::Block const& block) const;

    MCAPI void beforeOnPlayerPlace(::BlockEvents::BlockPlayerPlacingEvent& eventData) const;

    MCAPI bool hasSubscriptionFor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEventTypes type,
        ::BlockCustomComponentsComponent const&                       customComponents
    ) const;

    MCAPI void onEntityFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent const& eventData) const;

    MCAPI void onPlayerDestroy(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    MCAPI void onPlayerInteract(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void onQueuedTick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;

    MCAPI void onRandomTick(::BlockEvents::BlockRandomTickEvent const& eventData) const;

    MCAPI void onStepOff(::BlockEvents::BlockStepOffEvent const& eventData) const;

    MCAPI void onStepOn(::BlockEvents::BlockStepOnEvent const& eventData) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*
    tryGetRegisteredComponent(::HashedString const& name) const;

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

    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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

    MCAPI bool $onFlushBlockCustomComponentAfterEvents();

    MCAPI void $onPostFlushAfterEvents();

    MCAPI void $_onScriptInitializationComplete();

    MCAPI void $_onReload();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForScriptDeferredEventListener();

    MCAPI static void** $vftableForScriptCustomComponentRegistry();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
