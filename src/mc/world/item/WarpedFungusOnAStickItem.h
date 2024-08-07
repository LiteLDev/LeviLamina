#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class WarpedFungusOnAStickItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WarpedFungusOnAStickItem& operator=(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WarpedFungusOnAStickItem() = default;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 47
    virtual bool requiresInteract() const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    MCAPI WarpedFungusOnAStickItem(std::string const&, int, struct cereal::ReflectionCtx&);

    // NOLINTEND
};
