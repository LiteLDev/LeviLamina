#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool uniqueAuxValues$() const;

    MCAPI ::ItemUseMethod
    useTimeDepleted$(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // NOLINTEND
};
