#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/enums/AllExperiments.h"
#include "mc/world/item/components/ItemUseMethod.h"

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

    MCVAPI class Item const*
    useTimeDepleted(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&);

    MCAPI FoodItemComponent();

    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;

    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack const&, class ItemStack&, class Actor&)>& onConsume();

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
