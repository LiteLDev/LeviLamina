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
    // symbol: ?_initializeComponent@FoodItemComponent@@UEAAXXZ
    MCVAPI void _initializeComponent();

    // symbol: ?canAlwaysEat@FoodItemComponent@@UEBA_NXZ
    MCVAPI bool canAlwaysEat() const;

    // symbol: ?eatItem@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVActor@@AEAVLevel@@@Z
    MCVAPI class Item const* eatItem(class ItemStack& instance, class Actor& actor, class Level& level);

    // symbol: ?getNutrition@FoodItemComponent@@UEBAHXZ
    MCVAPI int getNutrition() const;

    // symbol: ?getSaturationModifier@FoodItemComponent@@UEBAMXZ
    MCVAPI float getSaturationModifier() const;

    // symbol: ?use@FoodItemComponent@@UEAA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCVAPI bool use(class ItemStack& instance, class Player& player);

    // symbol:
    // ?useTimeDepleted@FoodItemComponent@@UEAAPEBVItem@@AEAW4ItemUseMethod@@AEBVItemStack@@AEAV4@AEAVPlayer@@AEAVLevel@@@Z
    MCVAPI class Item const*
    useTimeDepleted(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&);

    // symbol: ??0FoodItemComponent@@QEAA@XZ
    MCAPI FoodItemComponent();

    // symbol: ?getUsingConvertsToItemDescriptor@FoodItemComponent@@QEBA?AVItemDescriptor@@XZ
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;

    // symbol:
    // ?onConsume@FoodItemComponent@@QEAAAEAV?$Connector@$$A6AXAEBVItemStack@@AEAV1@AEAVActor@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack const&, class ItemStack&, class Actor&)>& onConsume();

    // symbol:
    // ?bindType@FoodItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@FoodItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
