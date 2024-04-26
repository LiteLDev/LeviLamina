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

class EnderpearlItem : public ::Item {
public:
    // prevent constructor by default
    EnderpearlItem& operator=(EnderpearlItem const&);
    EnderpearlItem(EnderpearlItem const&);
    EnderpearlItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnderpearlItem@@UEAA@XZ
    virtual ~EnderpearlItem() = default;

    // vIndex: 19, symbol: ?isThrowable@EnderpearlItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 72, symbol: ?use@EnderpearlItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 89, symbol: ?getCooldownType@EnderpearlItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 90, symbol: ?getCooldownTime@EnderpearlItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // symbol: ??0EnderpearlItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI EnderpearlItem(std::string const& nameId, int id);

    // symbol: ?ENDER_PEARL_COOLDOWN@EnderpearlItem@@2VHashedString@@B
    MCAPI static class HashedString const ENDER_PEARL_COOLDOWN;

    // NOLINTEND
};
