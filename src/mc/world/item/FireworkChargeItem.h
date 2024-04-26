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

class FireworkChargeItem : public ::Item {
public:
    // FireworkChargeItem inner types define
    enum class Shape {};

public:
    // prevent constructor by default
    FireworkChargeItem& operator=(FireworkChargeItem const&);
    FireworkChargeItem(FireworkChargeItem const&);
    FireworkChargeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FireworkChargeItem@@UEAA@XZ
    virtual ~FireworkChargeItem() = default;

    // vIndex: 14, symbol: ?isDyeable@FireworkChargeItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@FireworkChargeItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       advancedToolTips
    ) const;

    // vIndex: 56, symbol: ?isValidAuxValue@FireworkChargeItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 62, symbol: ?getColor@FireworkChargeItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 101, symbol: ?hasSameRelevantUserData@FireworkChargeItem@@UEBA_NAEBVItemStackBase@@0@Z
    virtual bool hasSameRelevantUserData(class ItemStackBase const& stack, class ItemStackBase const& other) const;

    // symbol: ??0FireworkChargeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FireworkChargeItem(std::string const& nameId, int id);

    // symbol:
    // ?getFormattedHoverText@FireworkChargeItem@@SAXAEBVCompoundTag@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
    MCAPI static void
    getFormattedHoverText(class CompoundTag const& explosion, std::string& hovertext, std::string const& indent);

    // symbol:
    // ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemInstance@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
    MCAPI static class ItemInstance const& initFireworkChargeItem(
        class ItemInstance&         itemInstance,
        ::FireworkChargeItem::Shape shape,
        std::vector<uchar>          colors,
        std::vector<uchar>          fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    // symbol:
    // ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemStack@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
    MCAPI static class ItemStack const& initFireworkChargeItem(
        class ItemStack&            item,
        ::FireworkChargeItem::Shape shape,
        std::vector<uchar>          colors,
        std::vector<uchar>          fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    // symbol: ?setColor@FireworkChargeItem@@SAXAEAVItemStackBase@@@Z
    MCAPI static void setColor(class ItemStackBase& instance);

    // symbol: ?TAG_EXPLOSION@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_EXPLOSION;

    // symbol: ?TAG_E_COLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_COLORS;

    // symbol: ?TAG_E_FADECOLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_FADECOLORS;

    // symbol: ?TAG_E_FLICKER@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_FLICKER;

    // symbol: ?TAG_E_TRAIL@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_TRAIL;

    // symbol: ?TAG_E_TYPE@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_TYPE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_initFireworkChargeItem@FireworkChargeItem@@CAXAEAVItemStackBase@@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
    MCAPI static void _initFireworkChargeItem(
        class ItemStackBase&        itemInstance,
        ::FireworkChargeItem::Shape shape,
        std::vector<uchar>          colors,
        std::vector<uchar>          fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    // symbol:
    // ?appendColors@FireworkChargeItem@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@EV?$allocator@E@std@@@3@@Z
    MCAPI static void appendColors(std::string& hovertext, std::vector<uchar> const& colorList);

    // NOLINTEND
};
