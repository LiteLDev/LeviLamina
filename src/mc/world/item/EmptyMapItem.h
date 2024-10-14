#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ComplexItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual std::string buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const*) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const&) const;

    MCAPI EmptyMapItem(std::string const& itemName, short itemId);

    MCAPI static void addPlayerMarker(class ItemStackBase& map);

    MCAPI static bool isLocatorMap(class ItemStack const& map);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const*) const;

    MCAPI std::string getInteractText$(class Player const&) const;

    MCAPI bool requiresInteract$() const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    // NOLINTEND
};
