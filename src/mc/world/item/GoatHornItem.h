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
    // vIndex: 0, symbol: __gen_??1GoatHornItem@@UEAA@XZ
    virtual ~GoatHornItem() = default;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@GoatHornItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& instance,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 72, symbol: ?use@GoatHornItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 89, symbol: ?getCooldownType@GoatHornItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 90, symbol: ?getCooldownTime@GoatHornItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 110, symbol: ?canBeCharged@GoatHornItem@@UEBA_NXZ
    virtual bool canBeCharged() const;

    // symbol: ??0GoatHornItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI GoatHornItem(std::string const& name, int id);

    // symbol: ?addGoatHornVarationSaveData@GoatHornItem@@SAXAEAVGoat@@AEAVItemStack@@@Z
    MCAPI static void addGoatHornVarationSaveData(class Goat&, class ItemStack& instance);

    // NOLINTEND
};
