#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI AuxDataBlockItem(std::string const& name, int id, class Block const* parentBlock);

    // NOLINTEND
};
