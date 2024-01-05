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

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: ?isValidAuxValue@BedItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 81, symbol:
    // ?buildDescriptionId@BedItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 103, symbol: ?getIconInfo@BedItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& itemStack, int, bool) const;

    // vIndex: 114, symbol: ?_checkUseOnPermissions@BedItem@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
    virtual bool
    _checkUseOnPermissions(class Actor& entity, class ItemStackBase& item, uchar const& face, class BlockPos const& pos)
        const;

    // vIndex: 117, symbol:
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
