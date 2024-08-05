#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DecoratedPotBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    DecoratedPotBlockItem& operator=(DecoratedPotBlockItem const&);
    DecoratedPotBlockItem(DecoratedPotBlockItem const&);
    DecoratedPotBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DecoratedPotBlockItem() = default;

    // vIndex: 48
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase&) const;

    MCAPI DecoratedPotBlockItem(std::string const&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string buildIngredientItemList(class CompoundTag const*) const;

    // NOLINTEND
};
