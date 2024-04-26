#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/DoorBlock.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DoorItem : public ::Item {
public:
    // prevent constructor by default
    DoorItem& operator=(DoorItem const&);
    DoorItem(DoorItem const&);
    DoorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DoorItem@@UEAA@XZ
    virtual ~DoorItem() = default;

    // vIndex: 118, symbol:
    // ?_useOn@DoorItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol:
    // ??0DoorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4DoorType@DoorBlock@@@Z
    MCAPI DoorItem(std::string const& name, int id, ::DoorBlock::DoorType type);

    // symbol: ?getDoorBlock@DoorItem@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getDoorBlock() const;

    // symbol: ?place@DoorItem@@SA_NPEAVBlockSource@@HHHHPEBVBlock@@@Z
    MCAPI static bool place(class BlockSource* source, int x, int y, int z, int dir, class Block const* block);

    // NOLINTEND
};
