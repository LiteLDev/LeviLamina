#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/CompoundType.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class CompoundItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    CompoundItem& operator=(CompoundItem const&);
    CompoundItem(CompoundItem const&);
    CompoundItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundItem() = default;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI CompoundItem(std::string const& name, int id, class Experiments const& experiments);

    MCAPI static ::CompoundType getCompoundType(class ItemDescriptor const& itemDescriptor);

    MCAPI static class RecipeIngredient getIngredientForCompound(::CompoundType type);

    MCAPI static class ItemInstance getItemForCompound(::CompoundType type, int stackCount);

    MCAPI static bool isCompoundItem(class ItemStackBase const& instance);

    MCAPI static void unregisterSpecialCompounds();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _registerSpecialCompound(class ItemInstance const& item, ::CompoundType type);

    MCAPI static std::string _getName(::CompoundType type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id, class Experiments const& experiments);

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI struct ResolvedItemIconInfo
    getIconInfo$(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    MCAPI static std::unordered_map<int, int>& mIdToSpecialCompound();

    MCAPI static std::unordered_map<int, class ItemInstance>& mTypeToSpecialCompound();

    // NOLINTEND
};
