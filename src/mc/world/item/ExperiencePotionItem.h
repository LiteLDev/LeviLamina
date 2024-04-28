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

class ExperiencePotionItem : public ::Item {
public:
    // prevent constructor by default
    ExperiencePotionItem& operator=(ExperiencePotionItem const&);
    ExperiencePotionItem(ExperiencePotionItem const&);
    ExperiencePotionItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExperiencePotionItem@@UEAA@XZ
    virtual ~ExperiencePotionItem() = default;

    // vIndex: 19, symbol: ?isThrowable@ExperiencePotionItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 38, symbol: ?isGlint@ExperiencePotionItem@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 72, symbol: ?use@ExperiencePotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@ExperiencePotionItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // symbol: ??0ExperiencePotionItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ExperiencePotionItem(std::string const& name, int id);

    // NOLINTEND
};
