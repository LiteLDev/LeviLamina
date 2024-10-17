#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    MCAPI DecoratedPotBlockItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string buildIngredientItemList(class CompoundTag const* ingredientList) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI void fixupCommon$(class ItemStackBase& stack) const;

    // NOLINTEND
};
