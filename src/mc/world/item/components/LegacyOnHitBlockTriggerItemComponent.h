#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnHitBlockTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnHitBlockTriggerItemComponent& operator=(LegacyOnHitBlockTriggerItemComponent const&);
    LegacyOnHitBlockTriggerItemComponent(LegacyOnHitBlockTriggerItemComponent const&);
    LegacyOnHitBlockTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyOnHitBlockTriggerItemComponent() = default;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _onHitBlock(class ItemStack& item, class Block const&, class BlockPos const& blockPos, class Mob& attacker);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void _initializeComponent$();

    // NOLINTEND
};
