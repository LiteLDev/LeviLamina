#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class AuxDataBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    AuxDataBlockItem& operator=(AuxDataBlockItem const&);
    AuxDataBlockItem(AuxDataBlockItem const&);
    AuxDataBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AuxDataBlockItem() = default;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI AuxDataBlockItem(std::string const& name, int id, class Block const* parentBlock);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id, class Block const* parentBlock);

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI int getLevelDataForAuxValue$(int auxValue) const;

    // NOLINTEND
};
