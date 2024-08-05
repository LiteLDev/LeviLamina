#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MedicineItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    MedicineItem& operator=(MedicineItem const&);
    MedicineItem(MedicineItem const&);
    MedicineItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MedicineItem() = default;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 75
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    MCAPI MedicineItem(std::string const& name, int id);

    MCAPI static class MobEffect const* getMobEffect(class ItemStack const& instance);

    // NOLINTEND
};
