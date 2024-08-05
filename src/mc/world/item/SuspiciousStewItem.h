#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SuspiciousStewItem : public ::Item {
public:
    // prevent constructor by default
    SuspiciousStewItem& operator=(SuspiciousStewItem const&);
    SuspiciousStewItem(SuspiciousStewItem const&);
    SuspiciousStewItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SuspiciousStewItem() = default;

    // vIndex: 59
    virtual bool uniqueAuxValues() const;

    // vIndex: 75
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    MCAPI static void applyStewEffect(class ItemStack const& inoutInstance, class Actor& actor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<class MobEffectInstance, 11> const& _getStewEffects();

    // NOLINTEND
};
