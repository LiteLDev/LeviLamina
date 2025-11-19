#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ComponentItem;
class HashedString;
class Item;
class ItemStack;
class Level;
class Player;
class SemVersion;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace SharedTypes::v1_20_50 { struct FoodItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FoodItemComponent : public ::NetworkedItemComponent<::FoodItemComponent>, public ::IFoodItemComponent {
public:
    // FoodItemComponent inner types define
    using ConsumeSignature = void(::ItemStack const&, ::ItemStack&, ::Actor&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>               mNutrition;
    ::ll::TypedStorage<4, 4, float>             mSaturationModifier;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mUsingConvertsTo;
    ::ll::TypedStorage<1, 1, bool>              mCanAlwaysEat;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::ItemStack const&, ::ItemStack&, ::Actor&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>>
                                                               mOnConsumePublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseTimeDepletedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FoodItemComponent() /*override*/ = default;

    // vIndex: 7
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    // vIndex: 1
    virtual int getNutrition() const /*override*/;

    // vIndex: 2
    virtual float getSaturationModifier() const /*override*/;

    // vIndex: 3
    virtual bool canAlwaysEat() const /*override*/;

    // vIndex: 4
    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) /*override*/;

    // vIndex: 5
    virtual void use(bool& result, ::ItemStack& instance, ::Player& player) /*override*/;

    // vIndex: 6
    virtual ::Item const*
    useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FoodItemComponent(::SharedTypes::v1_20_50::FoodItemComponent component);

    MCAPI ::Bedrock::PubSub::Connector<void(::ItemStack const&, ::ItemStack&, ::Actor&)>& onConsume();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::FoodItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent(::ComponentItem& owner);

    MCFOLD int $getNutrition() const;

    MCFOLD float $getSaturationModifier() const;

    MCFOLD bool $canAlwaysEat() const;

    MCAPI ::Item const* $eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level);

    MCAPI void $use(bool& result, ::ItemStack& instance, ::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNetworkedItemComponent();

    MCNAPI static void** $vftableForIFoodItemComponent();
    // NOLINTEND
};
