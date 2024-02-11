#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SignItem : public ::Item {
public:
    // prevent constructor by default
    SignItem& operator=(SignItem const&);
    SignItem(SignItem const&);
    SignItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SignItem@@UEAA@XZ
    virtual ~SignItem();

    // vIndex: 116, symbol: ?_calculatePlacePos@SignItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118, symbol:
    // ?_useOn@SignItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    // vIndex: 119, symbol: ?getBlockToPlace@SignItem@@UEBAPEBVBlock@@EAEBVActor@@VBlockPos@@@Z
    virtual class Block const* getBlockToPlace(uchar face, class Actor const& entity, class BlockPos pos) const;

    // symbol:
    // ??0SignItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4SignType@SignBlock@@@Z
    MCAPI SignItem(std::string const& name, int id, ::SignBlock::SignType type);

    // NOLINTEND
};
