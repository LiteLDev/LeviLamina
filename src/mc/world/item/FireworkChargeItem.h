#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    // vIndex: 0
    virtual ~FireworkChargeItem() = default;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       advancedToolTips
    ) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const&) const;

    // vIndex: 101
    virtual bool hasSameRelevantUserData(class ItemStackBase const& stack, class ItemStackBase const& other) const;

    MCAPI FireworkChargeItem(std::string const& nameId, int id);

    MCAPI static void
    getFormattedHoverText(class CompoundTag const& explosion, std::string& hovertext, std::string const& indent);

    MCAPI static class ItemInstance const& initFireworkChargeItem(
        class ItemInstance&         itemInstance,
        ::FireworkChargeItem::Shape shape,
        std::vector<uchar>          colors,
        std::vector<uchar>          fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    MCAPI static class ItemStack const& initFireworkChargeItem(
        class ItemStack&            item,
        ::FireworkChargeItem::Shape shape,
        std::vector<uchar>          colors,
        std::vector<uchar>          fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    MCAPI static void setColor(class ItemStackBase& instance);

    MCAPI static std::string const TAG_EXPLOSION;

    MCAPI static std::string const TAG_E_COLORS;

    MCAPI static std::string const TAG_E_FADECOLORS;

    MCAPI static std::string const TAG_E_FLICKER;

    MCAPI static std::string const TAG_E_TRAIL;

    MCAPI static std::string const TAG_E_TYPE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _initFireworkChargeItem(
        class ItemStackBase&        itemInstance,
        ::FireworkChargeItem::Shape shape,
        std::vector<uchar>          colors,
        std::vector<uchar>          fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    MCAPI static void appendColors(std::string& hovertext, std::vector<uchar> const& colorList);

    // NOLINTEND
};
