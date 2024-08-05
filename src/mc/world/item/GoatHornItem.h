#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class GoatHornItem : public ::Item {
public:
    // prevent constructor by default
    GoatHornItem& operator=(GoatHornItem const&);
    GoatHornItem(GoatHornItem const&);
    GoatHornItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GoatHornItem() = default;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& instance,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    // vIndex: 110
    virtual bool canBeCharged() const;

    MCAPI GoatHornItem(std::string const& name, int id);

    MCAPI static void addGoatHornVarationSaveData(class Goat&, class ItemStack& instance);

    // NOLINTEND
};
