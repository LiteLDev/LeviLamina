#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnDigTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponent& operator=(LegacyOnDigTriggerItemComponent const&);
    LegacyOnDigTriggerItemComponent(LegacyOnDigTriggerItemComponent const&);
    LegacyOnDigTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyOnDigTriggerItemComponent() = default;

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const& originalJsonVersion);

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI explicit LegacyOnDigTriggerItemComponent(struct LegacyOnDigTriggerItemComponentData&& componentData);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onMineBlock(
        bool&              result,
        class ItemStack&   item,
        class Block const& block,
        int                x,
        int                y,
        int                z,
        class Actor&       owner
    );

    // NOLINTEND
};
