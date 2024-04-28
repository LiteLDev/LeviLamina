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

class DiscFragmentItem : public ::Item {
public:
    // prevent constructor by default
    DiscFragmentItem& operator=(DiscFragmentItem const&);
    DiscFragmentItem(DiscFragmentItem const&);
    DiscFragmentItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DiscFragmentItem@@UEAA@XZ
    virtual ~DiscFragmentItem() = default;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@DiscFragmentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@DiscFragmentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // symbol: ??0DiscFragmentItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DiscFragmentItem(std::string const& name, int id);

    // NOLINTEND
};
