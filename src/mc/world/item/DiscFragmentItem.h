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
    // vIndex: 0
    virtual ~DiscFragmentItem() = default;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI DiscFragmentItem(std::string const& name, int id);

    // NOLINTEND
};
