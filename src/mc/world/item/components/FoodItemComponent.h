#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class Item;
class ItemDescriptor;
class ItemStack;
class Level;
class Player;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FoodItemComponent : public ::NetworkedItemComponent<::FoodItemComponent>, public ::IFoodItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk66a403;
    ::ll::UntypedStorage<4, 4>  mUnkb1ddb3;
    ::ll::UntypedStorage<8, 16> mUnk2e30dd;
    ::ll::UntypedStorage<1, 1>  mUnk1e72b9;
    ::ll::UntypedStorage<8, 8>  mUnk9ca5c8;
    ::ll::UntypedStorage<8, 16> mUnk28346c;
    ::ll::UntypedStorage<8, 16> mUnka08e56;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponent& operator=(FoodItemComponent const&);
    FoodItemComponent(FoodItemComponent const&);
    FoodItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FoodItemComponent() /*override*/ = default;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 1
    virtual int getNutrition() const /*override*/;

    // vIndex: 2
    virtual float getSaturationModifier() const /*override*/;

    // vIndex: 3
    virtual bool canAlwaysEat() const /*override*/;

    // vIndex: 4
    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) /*override*/;

    // vIndex: 5
    virtual void use(bool& result, ::ItemStack& item, ::Player& player) /*override*/;

    // vIndex: 6
    virtual ::Item const*
    useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemDescriptor getUsingConvertsToItemDescriptor() const;

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();

    MCFOLD int $getNutrition() const;

    MCFOLD float $getSaturationModifier() const;

    MCFOLD bool $canAlwaysEat() const;

    MCAPI ::Item const* $eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level);

    MCAPI void $use(bool& result, ::ItemStack& item, ::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForNetworkedItemComponent();

    MCAPI static void** $vftableForIFoodItemComponent();
    // NOLINTEND
};
