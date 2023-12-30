#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FoodItemComponent {
public:
    // prevent constructor by default
    FoodItemComponent(FoodItemComponent const&);

public:
    // NOLINTBEGIN
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

    // symbol: ?useTimeDepleted@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z
    MCVAPI class Item const* useTimeDepleted(class ItemStack& instance, class Player& player, class Level& level);

    // symbol: ??0FoodItemComponent@@QEAA@XZ
    MCAPI FoodItemComponent();

    // symbol: ?getUsingConvertsToItemDescriptor@FoodItemComponent@@QEBA?AVItemDescriptor@@XZ
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;

    // symbol: ??4FoodItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class FoodItemComponent& operator=(class FoodItemComponent const&);

    // symbol:
    // ?bindType@FoodItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@FoodItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
