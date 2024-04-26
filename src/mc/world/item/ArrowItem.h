#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ArrowItem : public ::ComponentItem {
public:
    // prevent constructor by default
    ArrowItem& operator=(ArrowItem const&);
    ArrowItem(ArrowItem const&);
    ArrowItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ArrowItem@@UEAA@XZ
    virtual ~ArrowItem() = default;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@ArrowItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 56, symbol: ?isValidAuxValue@ArrowItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 73, symbol: ?dispense@ArrowItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@ArrowItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 83, symbol:
    // ?buildEffectDescriptionName@ArrowItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@ArrowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@ArrowItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // symbol:
    // ??0ArrowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAUReflectionCtx@cereal@@@Z
    MCAPI ArrowItem(std::string const&, int, struct cereal::ReflectionCtx&);

    // symbol: ?applyEffect@ArrowItem@@QEBAXPEAVArrow@@AEBVItemInstance@@@Z
    MCAPI void applyEffect(class Arrow* arrow, class ItemInstance const& slotItem) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?getMobEffects@ArrowItem@@IEBA?AV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@H@Z
    MCAPI std::vector<class MobEffectInstance> getMobEffects(int auxValue) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_potionExistsOrContentError@ArrowItem@@AEBA?AV?$shared_ptr@$$CBVPotion@@@std@@H@Z
    MCAPI std::shared_ptr<class Potion const> _potionExistsOrContentError(int aux) const;

    // NOLINTEND
};
