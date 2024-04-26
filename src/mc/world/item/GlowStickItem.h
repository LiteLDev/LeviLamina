#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class GlowStickItem : public ::ChemistryStickItem {
public:
    // prevent constructor by default
    GlowStickItem& operator=(GlowStickItem const&);
    GlowStickItem(GlowStickItem const&);
    GlowStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GlowStickItem@@UEAA@XZ
    virtual ~GlowStickItem() = default;

    // vIndex: 56, symbol: ?isValidAuxValue@GlowStickItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@GlowStickItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 108, symbol: ?getLightEmission@GlowStickItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int auxValue) const;

    // symbol: ??0GlowStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI GlowStickItem(std::string const& name, int id);

    // symbol: ?COLORS@GlowStickItem@@2QBW4ItemColor@@B
    MCAPI static ::ItemColor const COLORS[];

    // symbol: ?MAX_ACTIVE_TICKS@GlowStickItem@@2HB
    MCAPI static int const MAX_ACTIVE_TICKS;

    // NOLINTEND
};
