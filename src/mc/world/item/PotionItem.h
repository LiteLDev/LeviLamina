#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class PotionItem : public ::Item {
public:
    // prevent constructor by default
    PotionItem& operator=(PotionItem const&);
    PotionItem(PotionItem const&);
    PotionItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PotionItem@@UEAA@XZ
    virtual ~PotionItem();

    // vIndex: 44, symbol: ?isDestructive@PotionItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@PotionItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 56, symbol: ?isValidAuxValue@PotionItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 59, symbol: ?uniqueAuxValues@PotionItem@@UEBA_NXZ
    virtual bool uniqueAuxValues() const;

    // vIndex: 72, symbol: ?use@PotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@PotionItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 74, symbol: ?useTimeDepleted@PotionItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack& instance, class Level* level, class Player* player) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@PotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 83, symbol:
    // ?buildEffectDescriptionName@PotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@PotionItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@PotionItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 118, symbol:
    // ?_useOn@PotionItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar, class Vec3 const& clickPos) const;

    // vIndex: 119, symbol: ?getPotionType@PotionItem@@UEBA?AW4PotionType@Potion@@XZ
    virtual ::Potion::PotionType getPotionType() const;

    // symbol: ??0PotionItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PotionItem(std::string const& name, int id);

    // symbol: ?applyEffect@PotionItem@@SAXPEAVThrownPotion@@AEBVItemStack@@@Z
    MCAPI static void applyEffect(class ThrownPotion* potion, class ItemStack const& slotItem);

    // symbol: ?isDestructivePotion@PotionItem@@SA_NW4PotionVariant@Potion@@@Z
    MCAPI static bool isDestructivePotion(::Potion::PotionVariant potionVariant);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isBlockConvertibleToMud@PotionItem@@AEBA?B_NAEBVBlockLegacy@@@Z
    MCAPI bool const _isBlockConvertibleToMud(class BlockLegacy const&) const;

    // NOLINTEND
};
