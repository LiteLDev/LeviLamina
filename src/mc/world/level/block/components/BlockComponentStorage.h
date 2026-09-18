#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class BlockComponentEventSubscriber;
class BlockConnectionComponent;
class BlockCustomComponentsComponent;
class BlockDeprecatedR16EventListenerComponent;
class BlockEntityFallOnConfigurationComponent;
class BlockMultiBlockComponent;
class BlockRandomOffsetComponent;
class BlockRedstoneConsumerComponent;
class BlockTickConfigurationComponent;
class BlockTransformationComponent;
class OnFallOnTrigger;
class OnInteractTrigger;
class OnPlacedTrigger;
class OnPlayerDestroyedTrigger;
class OnPlayerPlacingTrigger;
class OnStepOffTrigger;
class OnStepOnTrigger;
struct BlockAmbientSoundComponent;
struct BlockBlockEntityComponent;
struct BlockChestObstructionComponent;
struct BlockCollisionBoxComponent;
struct BlockConnectionRuleComponent;
struct BlockContainerComponent;
struct BlockCraftingTableComponent;
struct BlockDestructibleByExplosionComponent;
struct BlockDestructibleByMiningComponent;
struct BlockDestructionParticlesComponent;
struct BlockDisplayNameComponent;
struct BlockEmbeddedVisualComponent;
struct BlockFlammableComponent;
struct BlockFlowerPottableComponent;
struct BlockFrictionComponent;
struct BlockGeometryComponent;
struct BlockInstrumentComponent;
struct BlockItemVisualComponent;
struct BlockLeashableComponent;
struct BlockLightDampeningComponent;
struct BlockLightEmissionComponent;
struct BlockLiquidDetectionComponent;
struct BlockLootComponent;
struct BlockMapColorComponent;
struct BlockMaterialInstancesComponent;
struct BlockMovableComponent;
struct BlockPlacementFilterComponent;
struct BlockPrecipitationInteractionsComponent;
struct BlockQueuedTickingComponent;
struct BlockRandomTickingComponent;
struct BlockRedstoneComponent;
struct BlockRedstoneProducerComponent;
struct BlockSelectionBoxComponent;
struct BlockSoundComponent;
struct BlockSupportComponent;
struct BlockVoxelShapesCullingComponent;
// clang-format on

class BlockComponentStorage {
public:
    // BlockComponentStorage inner types declare
    // clang-format off
    struct ComponentBase;
    template<typename T0> struct ComponentInstance;
    // clang-format on

    // BlockComponentStorage inner types define
    struct ComponentBase {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ComponentBase() = default;
        // NOLINTEND
    };

    /// A component is stored as its vtable followed by the value, which is why the game reaches the payload with
    /// &componentBase[1].
    template <typename T0>
    struct ComponentInstance : ComponentBase {
        template <class... A>
        explicit ComponentInstance(A&&... a) : mValue(::std::forward<A>(a)...) {}

        T0 mValue;
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::Bedrock::typeid_t<void>,
            ::std::unique_ptr<::BlockComponentStorage::ComponentBase>,
            ::std::less<::Bedrock::typeid_t<void>>,
            ::std::vector<::Bedrock::typeid_t<void>>,
            ::std::vector<::std::unique_ptr<::BlockComponentStorage::ComponentBase>>>>
        mComponents;
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<
            ::Bedrock::typeid_t<void>,
            ::std::less<::Bedrock::typeid_t<void>>,
            ::std::vector<::Bedrock::typeid_t<void>>>>
                                                                                mStatelessComponents;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowModifyingComponents;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowComponentReplacement;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowTryGetComponentBeforeFinalization;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BlockComponentEventSubscriber>> mBlockComponentEventSubscriber;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockComponentStorage::ComponentBase* _findComponentBase(::Bedrock::typeid_t<void> componentIdToFind) const;

    MCAPI ~BlockComponentStorage();
    // NOLINTEND

public:
    template <class T>
    [[nodiscard]] bool hasComponent() const {
        // The game also reads mAllowModifyingComponents at the top of this function and discards
        // the result; that read has no observable effect, so it is omitted here.
        auto const& components = mComponents.get();
        return components.find(::Bedrock::type_id<void, T>()) != components.end();
    }

    /// The payload sits immediately after ComponentBase's vtable pointer.
    template <class T>
    [[nodiscard]] T* _findComponentTyped() const {
        auto* componentBase = _findComponentBase(::Bedrock::type_id<void, T>());
        return componentBase != nullptr ? reinterpret_cast<T*>(&componentBase[1]) : nullptr;
    }

    /// @brief Constructs a component of type `TComponent` in place and inserts it, or overwrites the
    ///        existing one when the storage allows replacement.
    template <class TComponent, class... Args>
    TComponent* _addStatefulComponent(::Bedrock::typeid_t<void> typeId, Args&&... args) {
        if (auto* existing = _findComponentBase(typeId)) {
            // The payload sits immediately after ComponentBase's vtable pointer.
            auto* component = reinterpret_cast<TComponent*>(&existing[1]);
            if (mAllowComponentReplacement) {
                *component = TComponent{::std::forward<Args>(args)...};
            }
            return component;
        }

        auto* instance  = new ComponentInstance<TComponent>(::std::forward<Args>(args)...);
        auto* component = &instance->mValue;

        auto const& keys = mComponents->keys();
        auto const  at =
            ::std::lower_bound(keys.cbegin(), keys.cend(), typeId, ::std::less<::Bedrock::typeid_t<void>>{});
        mComponents->emplace_hint(at, typeId, ::std::unique_ptr<ComponentBase>{instance});

        // The game locks the event subscriber here and drops the result; refcounting it is all its
        // inlined body does.
        (void)mBlockComponentEventSubscriber.lock();

        return component;
    }

    inline void allowComponentReplacement() { mAllowComponentReplacement = true; }

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
