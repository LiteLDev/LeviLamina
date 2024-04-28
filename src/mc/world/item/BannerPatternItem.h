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

class BannerPatternItem : public ::Item {
public:
    // BannerPatternItem inner types define
    enum class Type {};

public:
    // prevent constructor by default
    BannerPatternItem& operator=(BannerPatternItem const&);
    BannerPatternItem(BannerPatternItem const&);
    BannerPatternItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BannerPatternItem@@UEAA@XZ
    virtual ~BannerPatternItem() = default;

    // vIndex: 39, symbol: ?isPattern@BannerPatternItem@@UEBA_NXZ
    virtual bool isPattern() const;

    // vIndex: 40, symbol: ?getPatternIndex@BannerPatternItem@@UEBAHXZ
    virtual int getPatternIndex() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@BannerPatternItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BannerPatternItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // symbol: ??0BannerPatternItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4Type@0@@Z
    MCAPI BannerPatternItem(std::string const& name, int id, ::BannerPatternItem::Type type);

    // NOLINTEND
};
