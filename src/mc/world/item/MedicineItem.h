#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MedicineItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    MedicineItem& operator=(MedicineItem const&);
    MedicineItem(MedicineItem const&);
    MedicineItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MedicineItem@@UEAA@XZ
    virtual ~MedicineItem() = default;

    // vIndex: 56, symbol: ?isValidAuxValue@MedicineItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 72, symbol: ?use@MedicineItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 74, symbol:
    // ?useTimeDepleted@MedicineItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@MedicineItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@MedicineItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@MedicineItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // symbol: ??0MedicineItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI MedicineItem(std::string const& name, int id);

    // symbol: ?getMobEffect@MedicineItem@@SAPEBVMobEffect@@AEBVItemStack@@@Z
    MCAPI static class MobEffect const* getMobEffect(class ItemStack const& instance);

    // NOLINTEND
};
