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

class CocoaBeanItem : public ::Item {
public:
    // prevent constructor by default
    CocoaBeanItem& operator=(CocoaBeanItem const&);
    CocoaBeanItem(CocoaBeanItem const&);
    CocoaBeanItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CocoaBeanItem@@UEAA@XZ
    virtual ~CocoaBeanItem() = default;

    // vIndex: 15, symbol: ?isDye@CocoaBeanItem@@UEBA_NXZ
    virtual bool isDye() const;

    // vIndex: 16, symbol: ?getItemColor@CocoaBeanItem@@UEBA?AW4ItemColor@@XZ
    virtual ::ItemColor getItemColor() const;

    // vIndex: 56, symbol: ?isValidAuxValue@CocoaBeanItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@CocoaBeanItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@CocoaBeanItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 118, symbol:
    // ?_useOn@CocoaBeanItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    // symbol: ??0CocoaBeanItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI CocoaBeanItem(std::string const&, int, bool);

    // NOLINTEND
};
