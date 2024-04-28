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

class BlockItem : public ::Item {
public:
    // prevent constructor by default
    BlockItem& operator=(BlockItem const&);
    BlockItem(BlockItem const&);
    BlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockItem@@UEAA@XZ
    virtual ~BlockItem();

    // vIndex: 44, symbol: ?isDestructive@BlockItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 56, symbol: ?isValidAuxValue@BlockItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104, symbol: ?getIconInfo@BlockItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 108, symbol: ?getLightEmission@BlockItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int data) const;

    // vIndex: 109, symbol: ?getIconYOffset@BlockItem@@UEBAHXZ
    virtual int getIconYOffset() const;

    // vIndex: 116, symbol: ?_calculatePlacePos@BlockItem@@MEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118, symbol:
    // ?_useOn@BlockItem@@MEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0BlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BlockItem(std::string const& name, int id);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_displayHeightLimitErrorMessages@BlockItem@@IEBAXAEAVActor@@H_N@Z
    MCAPI void _displayHeightLimitErrorMessages(class Actor& actor, int y, bool) const;

    // NOLINTEND
};
