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

class SmithingTemplateItem : public ::Item {
public:
    // SmithingTemplateItem inner types define
    enum class UpgradeType {};

public:
    // prevent constructor by default
    SmithingTemplateItem& operator=(SmithingTemplateItem const&);
    SmithingTemplateItem(SmithingTemplateItem const&);
    SmithingTemplateItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SmithingTemplateItem@@UEAA@XZ
    virtual ~SmithingTemplateItem() = default;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@SmithingTemplateItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@SmithingTemplateItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // symbol:
    // ??0SmithingTemplateItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4UpgradeType@0@0@Z
    MCAPI
    SmithingTemplateItem(std::string const& name, int id, ::SmithingTemplateItem::UpgradeType, std::string const&);

    // NOLINTEND
};
