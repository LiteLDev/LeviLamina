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
    // vIndex: 0
    virtual ~SmithingTemplateItem() = default;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI SmithingTemplateItem(
        std::string const&                  name,
        int                                 id,
        ::SmithingTemplateItem::UpgradeType upgradeType,
        std::string const&                  upgradeName
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const*) const;

    // NOLINTEND
};
