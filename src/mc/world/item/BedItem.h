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

class BedItem : public ::Item {
public:
    // prevent constructor by default
    BedItem& operator=(BedItem const&);
    BedItem(BedItem const&);
    BedItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BedItem@@UEAA@XZ
    virtual ~BedItem() = default;

    // vIndex: 56, symbol: ?isValidAuxValue@BedItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BedItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104, symbol: ?getIconInfo@BedItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 115, symbol: ?_checkUseOnPermissions@BedItem@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
    virtual bool
    _checkUseOnPermissions(class Actor& entity, class ItemStackBase& item, uchar const& face, class BlockPos const& pos)
        const;

    // vIndex: 118, symbol:
    // ?_useOn@BedItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryUseOn@BedItem@@AEBA?AVInteractionResult@@AEAVItemStackBase@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    MCAPI class InteractionResult _tryUseOn(
        class ItemStackBase& instance,
        class Actor&         actor,
        class BlockPos       pos,
        uchar                face,
        class Vec3 const&    clickPos
    ) const;

    // NOLINTEND
};
