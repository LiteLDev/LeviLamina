#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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

    MCAPI static void addGoatHornVarationSaveData(class Goat& goat, class ItemStack& instance);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& instance,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI bool canBeCharged$() const;

    MCAPI int getCooldownTime$() const;

    MCAPI class HashedString const& getCooldownType$() const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    // NOLINTEND
};
