#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ComplexItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class EmptyMapItem : public ::ComplexItem {
public:
    // prevent constructor by default
    EmptyMapItem& operator=(EmptyMapItem const&);
    EmptyMapItem(EmptyMapItem const&);
    EmptyMapItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EmptyMapItem@@UEAA@XZ
    virtual ~EmptyMapItem() = default;

    // vIndex: 47, symbol: ?requiresInteract@EmptyMapItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 72, symbol: ?use@EmptyMapItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@EmptyMapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 105, symbol:
    // ?getInteractText@EmptyMapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // symbol: ??0EmptyMapItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI EmptyMapItem(std::string const& itemName, short itemId);

    // symbol: ?addPlayerMarker@EmptyMapItem@@SAXAEAVItemStackBase@@@Z
    MCAPI static void addPlayerMarker(class ItemStackBase& map);

    // symbol: ?isLocatorMap@EmptyMapItem@@SA_NAEBVItemStack@@@Z
    MCAPI static bool isLocatorMap(class ItemStack const& map);

    // NOLINTEND
};
