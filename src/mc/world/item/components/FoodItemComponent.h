#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FoodItemComponent {
public:
    // prevent constructor by default
    FoodItemComponent& operator=(FoodItemComponent const&);
    FoodItemComponent(FoodItemComponent const&);

public:
    // NOLINTBEGIN
    MCVAPI void _initializeComponent();

    MCVAPI bool canAlwaysEat() const;

    MCVAPI class Item const* eatItem(class ItemStack& instance, class Actor& actor, class Level& level);

    MCVAPI int getNutrition() const;

    MCVAPI float getSaturationModifier() const;

    MCVAPI bool use(class ItemStack& instance, class Player& player);

    MCVAPI class Item const* useTimeDepleted(
        ::ItemUseMethod&       itemUseMethod,
        class ItemStack const& initialInstance,
        class ItemStack&       instance,
        class Player&          player,
        class Level&           level
    );

    MCAPI FoodItemComponent();

    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;

    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack const&, class ItemStack&, class Actor&)>& onConsume();

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForIFoodItemComponent();

    MCAPI static void** vftableForNetworkedItemComponent();

    MCAPI void* ctor$();

    MCAPI void _initializeComponent$();

    MCAPI bool canAlwaysEat$() const;

    MCAPI class Item const* eatItem$(class ItemStack& instance, class Actor& actor, class Level& level);

    MCAPI int getNutrition$() const;

    MCAPI float getSaturationModifier$() const;

    MCAPI bool use$(class ItemStack& instance, class Player& player);

    MCAPI class Item const* useTimeDepleted$(
        ::ItemUseMethod&       itemUseMethod,
        class ItemStack const& initialInstance,
        class ItemStack&       instance,
        class Player&          player,
        class Level&           level
    );

    // NOLINTEND
};
