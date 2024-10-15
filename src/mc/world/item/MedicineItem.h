#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    MCAPI MedicineItem(std::string const& name, int id);

    MCAPI static class MobEffect const* getMobEffect(class ItemStack const& instance);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI struct ResolvedItemIconInfo getIconInfo$(class ItemStackBase const& item, int, bool) const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    MCAPI ::ItemUseMethod
    useTimeDepleted$(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // NOLINTEND
};
