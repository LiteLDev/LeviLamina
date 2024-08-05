#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ComplexItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class EmptyMapItem : public ::ComplexItem {
public:
    // prevent constructor by default
    EmptyMapItem& operator=(EmptyMapItem const&);
    EmptyMapItem(EmptyMapItem const&);
    EmptyMapItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmptyMapItem() = default;

    // vIndex: 47
    virtual bool requiresInteract() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const&) const;

    MCAPI EmptyMapItem(std::string const& itemName, short itemId);

    MCAPI static void addPlayerMarker(class ItemStackBase& map);

    MCAPI static bool isLocatorMap(class ItemStack const& map);

    // NOLINTEND
};
