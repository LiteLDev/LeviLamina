#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyEventItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    LegacyEventItemComponent& operator=(LegacyEventItemComponent const&);
    LegacyEventItemComponent(LegacyEventItemComponent const&);
    LegacyEventItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyEventItemComponent@@UEAA@XZ
    virtual ~LegacyEventItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LegacyEventItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0LegacyEventItemComponent@@QEAA@$$QEAULegacyEventItemComponentData@@@Z
    MCAPI explicit LegacyEventItemComponent(struct LegacyEventItemComponentData&&);

    // symbol:
    // ?executeTrigger@LegacyEventItemComponent@@QEBA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    MCAPI bool executeTrigger(class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&) const;

    // symbol: ?getIdentifier@LegacyEventItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
